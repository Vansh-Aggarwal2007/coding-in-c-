#include <iostream>
#include <cstdarg>
using namespace std;
int sum (int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; i ++) {
        total += va_arg(args, int);
    }
    va_end(args);

    return total;
}

int main () {
    cout << sum(3, 10, 20, 30) << endl;
    cout << sum(5,1,2,3,4,5 ) << endl;
}