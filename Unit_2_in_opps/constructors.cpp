#include <iostream>
using namespace std;

class Wall {
    public:
    int length;
    Wall(int len) {
        length = len;
    }
};

class Wall2 {
    public:
    int length;
    Wall2 (int len) {length = len;}
    Wall2(const Wall &obj) {
        length = obj.length;
    }
};

int main () {
    Wall obj1(20);
    cout << obj1.length << endl;
    Wall2 obj2;
    cout << obj2.length;
}