#include <iostream>
using namespace std;

int square( int n);

int square(int n) {
    return n * n;
}

int main () {


int marks = 90;
int &ref = marks; //alias for marks

ref = 95; 
cout << marks << endl ; // prints 95

// same memory address 
cout << &marks << " " << &ref << endl ;

int x = square(6);

cout << x ;
}
