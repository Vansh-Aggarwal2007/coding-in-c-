#include <iostream>
using namespace std;

#define SIZE 100

int queueArray[SIZE];
int front = -1;
int rear = -1;

bool isFull() {
    return (front == (rear + 1) % SIZE);
}

bool isEmpty() {
    return (front == -1);
}

void insert(int value) {
    if (isFull()) {
        cout << "Overflow " << endl;
        return;
    }

    if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queueArray[rear] = value;
}

int remove() {
    if (isEmpty()) {
        cout << "Underflow" << endl;
        return -1;
    }

    int deletedValue = queueArray[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
    return deletedValue;

}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    int i = front;
    while (true) {
        cout << queueArray[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

int main() {
    int ch;

    do {
        cout << "\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ";
        cin >> ch;

        switch (ch) {
            case 1: {
                int x;
                cout << "Enter val to enqueue: ";
                cin >> x;
                insert(x);
                break;
            }
            case 2: {
                int delVal = remove();
                if (delVal != -1) {
                    cout << "Deleted value is " << delVal << endl;
                }
                break;
            }
            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
                break;
        }
    } while (ch != 4);

    return 0;
}