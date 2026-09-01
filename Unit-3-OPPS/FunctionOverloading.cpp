#include <iostream>
using namespace std ;

class Cal {
    public:
    int add (int a, int b) {
        return a+b;
    }
    int add( int a, int b, int c) {
        return a+b+c;
    }

    double add (double a, double b) {
        return a+b;
    }
};