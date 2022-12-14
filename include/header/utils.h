/**
* @file utils.h
* @author T. Schmoderer (iathena@mailo.com)
* @version 0.1.0
* @date 2022-10-13
* @copyright Copyright (c) 2022. All rights reserved. This project is released under the GNU GENERAL PUBLIC LICENSE.
* @brief 
*/

#ifndef UTILS_H
#define UTILS_H

/* USEFUL LIBRARY */
#include <cstdint>
#include <math.h>
#include <cassert>
#include <iostream>
#include <stdlib.h>
#include <random>

/**
* @brief Compute \f$n\f$-th triangular number \f$T_n\f$ defined by 
* \f[
* T_n = \frac{n(n+1)}{2}.
* \f]
* @param n A nonnegative integer
* @return uint32_t \f$T_n\f$, \f$n\f$-th triangular number.
*/
inline uint32_t triangular(uint16_t n) {return n*(n+1)/2;}

double uniform_distribution(double , double ); 
double normal_distribution(double , double ); 

#endif
