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

#include <stdlib.h>

#include "base64.h"

/**
 * In order to calculate the length of our base64-encoded output, we need to
 * round up the input length to the nearest multiple of three. We then divide
 * by three to get the number of 8-byte blocks we'll need in the output. Since
 * base64 encoding takes three bytes of eight bits and outputs four bytes of
 * six bits, we need to multiply this number by four, giving us the length of
 * our output.
 */
static size_t base64_output_length(size_t input_length) {
    size_t output_length = input_length;

    while (output_length % 3 != 0) {
        ++output_length;
    }

    output_length /= 3;
    output_length *= 4;

    return output_length;
}

static const char basis_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

char* base64_encode(unsigned char* data, size_t input_length, size_t* output_length) {
    /**
     * Begin by testing for edge-cases, namely a NULL data pointer or an input
     * length of size zero. In both cases, we will simply return NULL as the
     * return buffer pointer and set the output_length size to zero.
     */
    if ((data == NULL) || (input_length == 0)) {
        /**
         * Set the output_length to zero to let the user know they needn't
         * bother checking the "return buffer" for any data, otherwise they'll
         * trigger a segmentation fault.
         */
        *output_length = 0;

        /**
         * Return now to short-circuit function execution.
         */
        return NULL;
    }

    /**
     * Calculate the number of bytes we'll need to allocate for the output
     * buffer.
     */
    *output_length = base64_output_length(input_length);

    /**
     * Allocate the output buffer.
     */
    unsigned char* output_buffer = malloc(*output_length * sizeof (unsigned char));

    /**
     * While normally we would simply declare counter variables in the for loop
     * initialization section, we need the index after we've finished iterating
     * through the input buffer to do some last-minute checks related to the
     * output buffer padding.
     */
    size_t index = 0;

    for (index = 0; index < input_length - 2; index += 3) {
        //
    }

    return output_buffer;
}
