#include <iostream>
using namespace std;

int main() {
    pid_t p1 = fork();
    if (p1 == 0) {
        cout << "Child 1 (PID: " << getpid() << " PPID: " << getppid() << ") Even: ";
        for (int i = 2; i <= 20; i += 2) cout << i << " ";
        cout << "\n";
        return 0;
    }

    pid_t p2 = fork();
    if (p2 == 0) {
        cout << "Child 2 (PID: " << getpid() << " PPID: " << getppid() << ") Odd: ";
        for (int i = 1; i <= 20; i += 2) cout << i << " ";
        cout << "\n";
        return 0;
    }

    cout << "Parent (PID: " << getpid() << " PPID: " << getppid() << ")\n";
    cout << "Spawned Child 1: " << p1 << " | Child 2: " << p2 << "\n";
    
    wait(NULL);
    wait(NULL);
    return 0;
}