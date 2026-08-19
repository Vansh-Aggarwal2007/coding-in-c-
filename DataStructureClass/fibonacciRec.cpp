#include <iostream>
using namespace std ;

int fib(int n) {
    if (n == 1|| n == 2)
        return n -1;
    else 
        return fib(n-1) + fib(n-2);
}

int main () {
    int n , i;
    cout << "enter the terms upto which series is to be printed\n";
    cin >> n;
    for(i = 1; i <= n; i ++ ) {
        cout << fib(i) << " ";
    }
    return 0;
}