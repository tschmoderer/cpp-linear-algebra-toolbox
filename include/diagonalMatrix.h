/**
* @file diagonalMatrix.h
* @author T. Schmoderer (iathena@mailo.com)
* @version 0.1.0
* @date 2022-10-01
* @copyright Copyright (c) 2022. All rights reserved. This project is released under the GNU GENERAL PUBLIC LICENSE.
* @brief Header file for Diagonal Matrix type
*/

#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H

#include "vector.h"

/* TYPE DIAGONAL MATRIX */
typedef Vector DiagonalMatrix;

/* METHODS */
double tr(const DiagonalMatrix & );
double det(const DiagonalMatrix & );

#endif
