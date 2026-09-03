#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    bool isCompleted = false;
};

int main() {
    const int n = 4;
    vector<Process> p(n);

    // Taking input from user
    cout << "Enter Arrival Time and Burst Time for 4 processes:\n";
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Process P" << p[i].id << ":\n";
        cout << "  Arrival Time: ";
        cin >> p[i].arrivalTime;
        cout << "  Burst Time: ";
        cin >> p[i].burstTime;
    }

    int completed = 0;
    int currentTime = 0;
    float totalTAT = 0, totalWT = 0;

    // SJF Non-Preemptive Scheduling
    while (completed < n) {
        int minIndex = -1;
        int minBurst = 1e9;

        // Find the process with the shortest burst time among arrived processes
        for (int i = 0; i < n; i++) {
            if (p[i].arrivalTime <= currentTime && !p[i].isCompleted) {
                if (p[i].burstTime < minBurst) {
                    minBurst = p[i].burstTime;
                    minIndex = i;
                } else if (p[i].burstTime == minBurst) {
                    // Tie-breaker: earlier arrival time
                    if (minIndex == -1 || p[i].arrivalTime < p[minIndex].arrivalTime) {
                        minIndex = i;
                    }
                }
            }
        }

        // If no process has arrived, advance time to the next closest arrival
        if (minIndex == -1) {
            int nextArrival = 1e9;
            for (int i = 0; i < n; i++) {
                if (!p[i].isCompleted && p[i].arrivalTime > currentTime) {
                    nextArrival = min(nextArrival, p[i].arrivalTime);
                }
            }
            currentTime = nextArrival;
        } else {
            // Execute selected process
            currentTime += p[minIndex].burstTime;
            p[minIndex].completionTime = currentTime;
            p[minIndex].turnaroundTime = p[minIndex].completionTime - p[minIndex].arrivalTime;
            p[minIndex].waitingTime = p[minIndex].turnaroundTime - p[minIndex].burstTime;

            totalTAT += p[minIndex].turnaroundTime;
            totalWT += p[minIndex].waitingTime;

            p[minIndex].isCompleted = true;
            completed++;
        }
    }

    // Display Results
    cout << "\n-------------------------------------------------------------------------\n";
    cout << left << setw(8) << "Process" 
         << setw(8) << "AT" 
         << setw(8) << "BT" 
         << setw(8) << "CT" 
         << setw(8) << "TAT" 
         << setw(8) << "WT" << "\n";
    cout << "-------------------------------------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left << "P" << setw(7) << p[i].id 
             << setw(8) << p[i].arrivalTime 
             << setw(8) << p[i].burstTime 
             << setw(8) << p[i].completionTime 
             << setw(8) << p[i].turnaroundTime 
             << setw(8) << p[i].waitingTime << "\n";
    }
    cout << "-------------------------------------------------------------------------\n";

    cout << fixed << setprecision(2);
    cout << "Average Turnaround Time: " << (totalTAT / n) << "\n";
    cout << "Average Waiting Time:    " << (totalWT / n) << "\n";

    return 0;
}