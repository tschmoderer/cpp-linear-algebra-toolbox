#include <iostream>
#include <stdlib.h>
#include <chrono>
#include "../include/header/vector.h"

#define ERR_NO_ARGUMENT 1
#define ERR_WRONG_TYPE_ARGUMENT 2
using namespace std; 

int main(int argc, char * argv[]) {
    if (argc < 2) {
        cerr << "You hould provide an argument ; e.g. ./perf_vector 12" << endl;
        return ERR_NO_ARGUMENT;
    }

    uint32_t N = atoi(argv[1]);
    if (N == 0) {
        cerr << "You hould provide a non-negative integer; e.g. ./perf_vector 12" << endl;
        return ERR_WRONG_TYPE_ARGUMENT;
    }

    Vector v = Vector::rand(N); 
    Vector w = Vector::rand(N); 
    double dot = 0.;

    auto start = chrono::high_resolution_clock::now();
    dot = v*w;
    auto stop  = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << duration.count() << endl;

    return 0; 
}