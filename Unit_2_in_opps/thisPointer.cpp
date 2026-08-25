#include <iostream>
using namespace std;

class Employee {
    private:
    int id;
    public setId (int id) {
        // id = id;
        this-> id = id;
    }
};

class Box {
    private:
    double width = 0, height = 0;
    public:
    Box& setWidth(double w) {
        width = w;
        return *this;
    }
    Box& setHeight(double h) {
        height = h;
        return *this;
    }
};


int main () {
    Box myBox;
    myBox.setWidth(10.5).setHeight(5.2);


}