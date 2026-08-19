#include <iostream>
#include <string>
using namespace std;

class Enclosing {
    private:
    string secret = "Enclosing's Private Data";

    public:
    class Nested {
        public:
        void revealSecret(Enclosing& e) {
            cout << "Accessing: " << e.secret << endl;
        }
    };
};

int main () {
    Enclosing outer;
    Enclosing::Nested inner;

    inner.revealSecret(outer);
    return 0;
}