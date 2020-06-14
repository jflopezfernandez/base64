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

unsigned char* base64_encode(unsigned char* data, size_t input_length, size_t* output_length) {
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

    return NULL;
}
