#include <iostream>
using namespace std;
#define MAX_SIZE 100
int queue [MAX_SIZE];
int n = 0, f, r;
void enqueue (int item ) {
    if (r == n) {
        cout << "OverFlow";
    }
    if (f == -1 && r == -1) {
        f = r = 0;
    } else {
        r = r + 1;
    }
    queue[r] = item;

}

int dequeue (int n) {
    if (f == -1) {
        cout << "Underflow";
    }
    int x = queue[f];
    if (f == r) {
        f = -1;
        r = -1;
    }
    f = f + 1;

}

int main () {

}