#include <iostream>
using namespace std;

#define MAX 10

class Deque {
private:
    int arr[MAX];
    int front;
    int rear;
    int size;

public:
    Deque() {
        front = -1;
        rear = -1;
        size = 0;
    }

    bool isFull() {
        return size == MAX;
    }

    bool isEmpty() {
        return size == 0;
    }

    void insertLeft(int val) {
        if (isFull()) {
            cout << "Deque Overflow! Cannot insert " << val << " at Left.\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            front = (front - 1 + MAX) % MAX;
        }

        arr[front] = val;
        size++;
        cout << "Inserted " << val << " at Left.\n";
    }

    void insertRight(int val) {
        if (isFull()) {
            cout << "Deque Overflow! Cannot insert " << val << " at Right.\n";
            return;
        }

        if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }

        arr[rear] = val;
        size++;
        cout << "Inserted " << val << " at Right.\n";
    }

    void deleteLeft() {
        if (isEmpty()) {
            cout << "Deque Underflow! Cannot delete from Left.\n";
            return;
        }

        cout << "Deleted " << arr[front] << " from Left.\n";

        if (front == rear) { 
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }

        size--;
    }

    void deleteRight() {
        if (isEmpty()) {
            cout << "Deque Underflow! Cannot delete from Right.\n";
            return;
        }

        cout << "Deleted " << arr[rear] << " from Right.\n";

        if (front == rear) { 
            front = -1;
            rear = -1;
        } else {
            rear = (rear - 1 + MAX) % MAX;
        }

        size--;
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is empty.\n";
            return;
        }

        cout << "Deque elements (Left -> Right): ";
        int i = front;
        for (int count = 0; count < size; count++) {
            cout << arr[i] << " ";
            i = (i + 1) % MAX;
        }
        cout << "\n";
    }
};
//govind mishra
int main() {
    Deque dq;
    int ch = 1;
    while ( ch >= 5) {
        switch (ch)
        {
        case 1:
            int x;
            cin >> x;
            dq.insertLeft(x);
            break;
        case 2:
            dq.deleteRight();
            break;
        case 3:
            int x;
            cin >> x;
        default:
            break;
        }
    }

    return 0;
}