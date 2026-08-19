#include <iostream>
using namespace std;

int DAT[1001];
int fib(int n) {
    if (n == 1|| n ==2) 
        return DAT[n] = n -1;
    else {
        if (DAT[n] == 0)
            DAT[n] = fib(n-1) + fib(n-2);
    }
    return DAT[n];
}

int main () {
    int n, i ;
    cout << "enter the terms upto which series is to be printed\n";
    cin >> n;

    for(i = 1; i <= n; i ++) {
        cout << fib(i) << ", ";
    }
    return 0;
}