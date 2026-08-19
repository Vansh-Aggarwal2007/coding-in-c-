#include <iostream>
using namespace std;

#define SQUARE(X) X*X

int main () {
    cout << SQUARE(5) << endl;
    cout << SQUARE(3 + 2) << endl;
    return 0;
}