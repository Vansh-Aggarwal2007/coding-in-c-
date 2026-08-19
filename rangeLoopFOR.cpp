#include <iostream>
#include <vector>
using namespace std;

int main () {
    int arr [] = { 10, 20, 30, 40, 50};
    vector <int> nums = {1, 2, 3, 4, 5};

    for (int x : nums ) {
        cout << x << " ";
    }
    cout << endl;
    for (int x : arr) {
        cout << x << " " ;
    }
    return 0;
}