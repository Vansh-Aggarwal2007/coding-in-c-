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

node * insertionCBT (node * &root, int val, queue<node*>& q) {
    node * newNode = new node(val);
    if(root == NULL) {
        root = newNode;
        q.push(root);
        return root;
    }
    node * curr = q.front();
    if(curr ->left == NULL) {
        curr ->left = newNode;
    } else if(curr ->right == NULL) {
        curr ->right = newNode;
        q.pop();
    } 
    q.push(newNode);
    return root;
}

vector<vector<int>> levelOrder(node* root) {
        vector<vector<int>> result ;
        if(root == nullptr)
            return result;
        queue<node *> q;
        q.push(root);
        while(!q.empty()) {
            vector<int> visited;
            int level = q.size();
            for(int i = 0; i < level; i ++) {
                node * current = q.front();
                q.pop();
                visited.push_back(current -> val);
                if(current -> left != nullptr)
                    q.push(current -> left);
                if(current -> right != nullptr)
                    q.push(current -> right);
            }
            result.push_back(visited);
        }
        return result;
    }

int main () {
    node* root;
    queue<node *> q;
    int val [9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i < 9; i ++) {
        insertionCBT(root, val[i], q);
    }
    vector<vector<int>> lev = levelOrder(root);
    for (int i = 0; i < lev.size(); i++) {
        // Inner loop for columns/elements in each row
        for (int j = 0; j < lev[i].size(); j++) {
            cout << lev[i][j] << " ";
        }
        cout << endl; // New line after each row
    }
}

