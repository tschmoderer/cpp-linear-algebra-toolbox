/**
* @file diagonalMatrix.cpp
* @author T. Schmoderer (iathena@mailo.com)
* @version 0.1.0
* @date 2022-09-30
* @copyright Copyright (c) 2022. All rights reserved. This project is released under the GNU GENERAL PUBLIC LICENSE.
* @brief Implementation file for Diagonal Matrix class
*/

#include "../include/diagonalMatrix.h"

double tr(const DiagonalMatrix & D) {
    return sum(D);
}

double det(const DiagonalMatrix & D) {
    return prod(D);
}
