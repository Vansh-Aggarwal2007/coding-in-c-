#include <iostream>
using namespace std;

class ResourceManager {
    private:
    int* dataBuffer;
    public:
    ResourceManager(int size) {
        dataBuffer = new int[size];
        cout << "Resource allocated\n";
    }

    ~ResourceManager() {
        delete[] dataBuffer;
        cout << "resource automatically freed by destructor.\n";
    }
};

int main () {
    {
    ResourceManager manager (1);
    }

    cout << "Exiting main function.\n";
    return 0;
}