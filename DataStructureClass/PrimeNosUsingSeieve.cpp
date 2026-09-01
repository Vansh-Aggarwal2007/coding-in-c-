#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    vector <bool> prime (n+1,true);
    for (int i = 2; i*i <= n; i ++) {
        if(prime[i]) {
            for(int j = 2*i; j <= n; j+i) {
                prime[j] = false;
            }
        }
    }
}