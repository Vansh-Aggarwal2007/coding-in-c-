#include <iostream>
using namespace std;

inline int max (int a, int b) {
    return (a > b) ? a : b ;
}

int main () {
    cout << max(10, 20);
    //compiler may expand to:
    //cout << (10 > 20 ? 10 : 20);
}