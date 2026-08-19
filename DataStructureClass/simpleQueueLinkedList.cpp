#include <iostream>
using namespace std;
int f = -1, r = -1;

struct node {
    int val;
    node * next;
    node (int v) {
        val = v;
        next = NULL;
    }
};

node * createNode (int v) {
    node * ptr = new node(v);
    return ptr;
}

