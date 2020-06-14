/**
 *  Base64
 *  Copyright (C) 2020  Jose Fernando Lopez Fernandez
 *  
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>

#include <check.h>

#include "base64.h"

/**
 * This test ensures that the base64_encode function returns a NULL pointer
 * when it is passed in a NULL string to encode.
 */
START_TEST(test_encode_null)
{
    unsigned char* data = NULL;
    size_t input_length = 0;
    size_t output_length = 0;

    unsigned char* encoded_data = base64_encode(data, input_length, &output_length);

    ck_assert_ptr_null(encoded_data);
    ck_assert_uint_eq(output_length, 0);
}

/**
 * This test ensures that attempting to encode an empty string results in
 * an empty string as the return value.
 *
 * @author Jose Fernando Lopez Fernandez
 */
START_TEST(test_encode_empty_string)
{
    unsigned char* data = "";
    size_t input_length = strlen((char *) data);
    size_t output_length = 0;

    unsigned char* encoded_data = base64_encode(data, input_length, &output_length);

    ck_assert_ptr_null(encoded_data);
    ck_assert_uint_eq(output_length, 0);
}

/**
 * This test checks the base64_encode function is properly encoding the string
 * 'horse' into its base64-encoded equivalent.
 *
 * @author Jose Fernando Lopez Fernandez <jflopezfernandez@gmail.com>
 */
START_TEST(test_encode_horse)
{
    char* data = "horse";
    size_t input_length = strlen(data);
    size_t output_length = 0;

    unsigned char* encoded_data = base64_encode((unsigned char *) data, input_length, &output_length);

    ck_assert_str_eq((char *) encoded_data, "aG9yc2U=");
}

/**
 * This test suite encompasses all of the unit tests related to base64 encoding.
 * 
 * @todo Add documentation strings for the three individual sections within the
 * function body.
 */
Suite* encode_suite(void)
{
    Suite* suite = suite_create("base64_encode Tests");

    TCase* test_case_encode_null = tcase_create("Base64 Encode NULL String");
    tcase_add_test(test_case_encode_null, test_encode_null);
    suite_add_tcase(suite, test_case_encode_null);

    TCase* test_case_encode_empty_string = tcase_create("Base64 Encode Empty String");
    tcase_add_test(test_case_encode_empty_string, test_encode_empty_string);
    suite_add_tcase(suite, test_case_encode_empty_string);

    TCase* test_case_encode_horse = tcase_create("Base64 Encode String: Horse");
    tcase_add_test(test_case_encode_horse, test_encode_horse);
    suite_add_tcase(suite, test_case_encode_horse);

    return suite;
}

int main(void)
{
    int tests_failed = 0;

    Suite* suite = encode_suite();

    SRunner* runner = srunner_create(suite);
    srunner_run_all(runner, CK_NORMAL);

    tests_failed = srunner_ntests_failed(runner);

    srunner_free(runner);

    return tests_failed;
}
