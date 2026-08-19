#include <iostream>
using namespace std;

class Tracker {
    private :
    static int activeObjects;

    public :
    Tracker() {
        activeObjects ++;
        cout << "Objects crated. Total active: " << activeObjects << '\n';
    }

    ~Tracker() {
        activeObjects --;
        cout << "Object destroyed. Total active: " << activeObjects << '\n';
    }
    static int getActveCount() {
        return activeObjects;
    }
};
int Tracker::activeObjects = 0;

int main () {
    cout << "Program Started. Initial count: " << Tracker::getActveCount() << "\n\n";
    Tracker obj1;
    {
        Tracker obj2;
    }
    Tracker obj3;

    cout << "\nProgram Ending...\n";
    return 0;
}