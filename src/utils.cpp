#include "../include/utils.h"

std::random_device rd;
std::mt19937 gen(rd());

/**
* @brief Generate a random number using the uniform distribution. 
* @param a Lower bound of the interval, default \f$a=0\f$
* @param b Upper bound of the interval (\f$b > a\f$), default \f$b=1\f$.
* @return double A random number picked uniformaly between \f$[a,b)\f$, 
*/
double uniform_distribution(double a = 0., double b = 1.) {
    std::uniform_real_distribution<double> d(a,b);
    return d(gen);
}

/**
* @brief Generate a random umber using the Gaussian distribution.
* @param m Mean value of the distribution, default \f$m=0\f$. 
* @param s Standart deviation of the distribution, default \f$s=1\f$. 
* @return double A random number picked following the Gaussian distribution \f$\mathcal{N}(m,s)\f$.
*/
double normal_distribution(double m = 0., double s = 1.) {
    std::normal_distribution<double> d(m, s); 
    return d(gen);
}
