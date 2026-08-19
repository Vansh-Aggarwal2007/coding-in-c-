#include <iostream>
using namespace std;

template<typename T>
T sum(T value) {
    return value;
}

template<typename T, typename...Args>
T sum(T first, Args...args) {
    return first + sum(args...);
}

int main () {
    cout << sum (10, 20,30) << endl ;
    cout << sum (1.5, 2.5, 3.0) << endl ;

    return 0;
}