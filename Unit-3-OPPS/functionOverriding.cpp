//this is an example of runtime polymorphism

#include <iostream>
using namespace std;

class shape {
        public:
        virtual void draw () {
            cout << "Drawing a generic shape..." << endl;
        }
    virtual ~shape() {}
};

class circle : public shape {
    public:
    void draw() override {
        cout << "Drawaing a Circle!" << endl;
    }
};

class square : public shape {
    public:
    void draw () override {
        cout << "Drawing a square" << endl;
    }
};

int main () {
    shape* shape1 = new circle();
    shape* shape2 = new square();
    shape* shape3 = new shape();

    shape1->draw();
    shape2->draw();
    shape3->draw();

    delete shape1;
    delete shape2;
    delete shape3;

    return 0;
}