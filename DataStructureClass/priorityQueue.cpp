#include <bits/stdc++.h>
using namespace std;

#define SIZE 50

class PriorityQueue {
private:
    int arr[SIZE];
    int size;
    
public:
    PriorityQueue() : size(0) {}
    
    void enqueue(int data) {
        if (size == SIZE) {
            cout << "Queue Full!" << endl;
            return;
        }
        
        int i = size - 1;
        while (i >= 0 && arr[i] < data) {
            arr[i + 1] = arr[i];
            i--;
        }
        
        arr[i + 1] = data;
        size++;
    }
    
    int dequeue() {
        if (size == 0) {
            cout << "Queue Empty!" << endl;
            return -1;
        }
        
        int data = arr[size - 1]; 
        size--;
        return data;
    }
    
    int front() {
        if (size == 0) return -1;
        return arr[size - 1];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    void display() {
        cout << "Priority Queue (Highest to Lowest):" << endl;
        for (int i = size - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    
    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(5);
    pq.enqueue(30);
    pq.enqueue(15);
    
    pq.display();
    
    cout << "\nDequeuing (highest priority first):" << endl;
    while (!pq.isEmpty()) {
        cout << pq.dequeue() << " ";
    }
    cout << endl;
    
    return 0;
}
