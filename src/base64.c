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

#include "base64.h"

/**
 * Rather than including the entire standard library header, for now we'll
 * simply check whether NULL has been previously defined. If it hasn't, we'll
 * just go ahead and define it and move on with our lives.
 */
#ifndef NULL
#define NULL ((void *) 0)
#endif

char* base64_encode(unsigned char* original_string) {
    /**
     * Begin by testing for edge-cases, namely NULL pointers and empty strings.
     * In both cases, we will be returning the same thing, a NULL pointer or an
     * empty string, respectively, depending on what the input was. In both
     * cases, we are essentially returning the same thing but by value.
     */
    if (original_string == NULL) {
        return NULL;
    } else if (strcmp(original_string, "") == 0) {
        return "";
    }

    return NULL;
}
