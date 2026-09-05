#include <iostream>
using namespace std;

class Box {
    private:
    int weight;

    public:
    Box(int w) {
        weight = w;
    }
    Box operator+(Box b) {
        return Box(weight + b.weight);
    }
    void display () {
        cout << "Total Weight = " << weight <<"Kg";
    }
};

int main () {
    Box b1(10);
    Box b2(20);

    Box b3 = b1 + b2;

    b3.display();

    return 0;
}