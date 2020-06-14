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

#ifndef BASE64_H_INCLUDED
#define BASE64_H_INCLUDED

/**
 * This is the function that does the actual encoding. The original data is
 * not modified. Instead, a memory buffer of the necessary length is dynamically
 * allocated via a call to malloc, which the caller needs to remember to free.
 * 
 * If the given data pointer is NULL, the function will simply return a NULL
 * pointer for the return buffer and an output length of zero.
 */
unsigned char* base64_encode(unsigned char* data, size_t input_length, size_t* output_length);

#endif /* BASE64_H_INCLUDED */
