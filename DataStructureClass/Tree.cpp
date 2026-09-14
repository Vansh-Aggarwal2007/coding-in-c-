#include <iostream>
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

int countNodes (node * root) {
    if(root == NULL) 
        return 0;
    return 1 + countNodes(root -> left) + countNodes(root -> right);
}

int count1Node(node * root) {
    if(root == NULL) 
        return 0;
    if((root -> left == NULL && root ->right != NULL) || (root -> left != NULL && root ->right == NULL)) 
        return 1 + count1Node(root -> right) + count1Node(root -> left);
    else 
    return count1Node(root -> left) + count1Node(root -> right);
}

int count2Node (node * root) {
    if(root == NULL) 
        return 0;
    else if (root ->left != NULL && root -> right != NULL)
        return 1 + count2Node(root ->left) + count2Node(root -> right);
    else 
    return count2Node(root -> left) + count2Node(root -> right);
} 

int sumOfNodes(node * root) {
    if(root == NULL) 
        return 0;
    int sum;
    sum += root ->val;
    return sum + sumOfNodes(root -> left) + sumOfNodes(root -> right);
}

void traverseInorder(node * root) {
    if(root == NULL) 
        return
    traverseInorder(root -> left);
    cout << " " << root ->val << " ";
    traverseInorder(root -> right);
}

void traversePerorder(node * root) {
    if(root == NULL) 
        return;
    cout << " " << root ->val << " ";
    traverseInorder(root -> left);
    traverseInorder(root -> right);
}

void traversePostorder(node * root) {
    if(root == NULL) 
        return
    traverseInorder(root -> left);
    traverseInorder(root -> right);
    cout << " " << root ->val << " ";

}

int height (node * root) {
    if(root == NULL)
        return 0;
    return 1 + max(height(root -> left), height(root -> right));
}

int main() {
    node * root = new node(1);
    root -> left = new node(2);
    root -> right = new node(3);
    root -> left -> left = new node(4);
    root -> left -> right = new node(5);

    cout << "The count of nodes = " << countNodes(root);
    //leet code 94, 104, 111, 144, 145
}