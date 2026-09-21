#include <iostream>
#include <queue>
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

node * Insert_BT(node * root, int key) {
    if (root == NULL) {
        node * root = new node(key);
        return root;
    }
    queue <node *> q;
    q.push(root);
    while(!q.empty()) {
        node * temp = q.front();
        q.pop();
        if(temp ->left != NULL)
            q.push(temp -> left);
        else {
            temp ->left = new node(key);
            return root;
        }
        if(temp ->right != NULL)
            q.push(temp -> right);
        else {
            temp ->right = new node(key);
            return root;
        }
    }
}

void traverseInorder(node * root) {
    if(root == NULL) 
        return
    traverseInorder(root -> left);
    cout << " " << root ->val << " ";
    traverseInorder(root -> right);
}

int main () {
    node * root = new node(15);
    root -> left = new node(10);
    root -> right = new node(6);
    root -> left ->left  = new node(7);
    root ->right ->left = new node(8);
    root ->right ->right = new node(9);

    Insert_BT(root, 12);
    traverseInorder(root);

}