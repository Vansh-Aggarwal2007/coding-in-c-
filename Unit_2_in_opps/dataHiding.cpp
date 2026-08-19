#include <iostream>
using namespace std;

class Encapsulation {
    private: 
    int hiddenData;

    public:
    void setData(int value) {
        hiddenData = value;
    }
    int getData () const {
        return hiddenData;
    }
};

int main () {
    Encapsulation obj;
    obj.setData(42);
    cout << " Hidden Data: " << obj.getData() << endl;
    return 0;
}