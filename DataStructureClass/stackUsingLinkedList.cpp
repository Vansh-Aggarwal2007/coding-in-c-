#include <iostream>
using namespace std ;

struct node {
    int data;
    node * next ;
    node(int x) {
        data = x;
        next = NULL;
    }
};

struct node* head;

void push() {
    int x;
    cin >> x;
    node * temp = new node(x);
    if (head == NULL) {
        temp -> data = x;
        temp -> next = head ;
        head = temp;
    } else {
        temp -> data = x;
        temp -> next = head ;
        head = temp;
    }
}

int pop () {
    if (head == NULL) {
        cout << "Underflow" ;
    } else {
        int x = head -> data;
        node * temp = head;
        head = head -> next;
        delete temp;
        return x;
    }
}

void display () {
    node * temp = head ;
    while (temp != NULL) {
        cout << temp -> data;
        temp = temp -> next;
    }
}

int main () {
    int ch;
    
    do{
        cin >> ch;
        switch (ch)
        {
        case 1:
        push();
            break;
        case 2:
        pop();
            break;
        case 3:
        display();
            break;
        
        default:
            break;
        }
    }while (ch >= 3)

    return 0;
    
    
}