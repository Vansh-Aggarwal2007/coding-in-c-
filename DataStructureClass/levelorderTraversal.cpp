#include <bits/stdc++.h>
using namespace std;

struct node {
    int val;
    node * left;
    node * right;

    node(int data) {
        val = data;
        left = right = NULL;
    }
};

