#include <iostream>
using namespace std;

template<typename...Args>
auto sum(Args...args) {
    return (args + ...);
}

int main () {
    cout << sum(10, 20, 30, 40) << endl;
}