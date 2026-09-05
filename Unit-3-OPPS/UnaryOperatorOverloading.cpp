#include <iostream>
using namespace std;

class Number {
    int x;

    public:

    Number(int n) {
        x =n;
    }
    void operator-() {
        x = -x;
    }
    void display () {
        cout << "Value = " << x << endl;
    }
};

int main () {
    Number n(10);

    cout << "before Operator Overloading: " << endl;
    n.display();

    -n;
    cout << "After operator Overloading:" << endl;

    n.display();

    return 0;
}