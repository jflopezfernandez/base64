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
    char* string = NULL;
    char* base64_string = base64_encode(string);

    ck_assert_ptr_null(base64_string);
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
