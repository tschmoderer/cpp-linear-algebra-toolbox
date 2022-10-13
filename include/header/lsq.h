/**
* @file lsq.h
* @author T. Schmoderer (iathena@mailo.com)
* @version 0.1.0
* @date 2022-10-13
* @copyright Copyright (c) 2022. All rights reserved. This project is released under the GNU GENERAL PUBLIC LICENSE.
* @brief 
*/

#ifndef LSQ_H
#define LSQ_H

#include "squareMatrix.h"

class LSQ {
    public: 

        /* CONSTRUCTORS */
        LSQ(); 
        LSQ(const LSQ & ); 
        LSQ(const Matrix * , const Vector * ); 

        /* DESTRUCTOR */
        ~LSQ(); 
        
        /* METHODS */
        void solve();
        void solve(double ); 
        double eval(); 

    private: 
        Matrix * A; 
        Vector * b; 
        Vector * x; 

        double lambda; 

        SquareMatrix * AAt;
        SquareMatrix * AtA;
}; 

#endif
