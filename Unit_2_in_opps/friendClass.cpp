#include <iostream>
using namespace std;

class A {
    private:
    int private_variable;

    protected:
    int protected_variable;

    public :
    A () {
        private_variable = 10;
        protected_variable = 99;
    }

    friend class GFG;
};

class GFG {
    public:
    void display(A & t) {
        cout << "The value of private= "<< t.private_variable << endl;
        cout << "The value of protected= "<< t.protected_variable << endl;

    }
};

int main () {
    A g;
    GFG fri;
    fri.display(g);
    return 0;
}