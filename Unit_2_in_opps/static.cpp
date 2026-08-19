#include <iostream>
using namespace std;

class Tracker {
    private:
    static int objectCount;
    int id;

    public:
    Tracker() {
        objectCount ++;
        id = objectCount;
    }

    static int getCount() {
        id = 5;
        return objectCount;
    }
};

int Tracker::objectCount = 0;

int main () {
    cout << "Initial count: " << Tracker::getCount() << endl;

    Tracker obj1;
    Tracker obj2;

    cout << "Final count: " << Tracker::getCount() << endl;

    return 0;
}