#include <iostream>
using namespace std;

class Engine;

class Car {
    public:
    void connectEngine(Engine* eng);
};

class Engine {
    public:
    void installInto (Car& vehicle) {
        vehicle.connectEngine(this);
    }
};