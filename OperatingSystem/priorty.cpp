#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> pid(n), at(n), bt(n), priority(n);
    vector<int> ct(n), tat(n), wt(n);
    vector<bool> completed(n, false);

    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;

        cout << "\nEnter Arrival Time, Burst Time and Priority for P"
             << pid[i] << ": ";
        cin >> at[i] >> bt[i] >> priority[i];
    }

    int time = 0;
    int completedCount = 0;

    while (completedCount < n) {
        int index = -1;
        int highestPriority = 999999;

        // Find highest-priority arrived process
        for (int i = 0; i < n; i++) {
            if (!completed[i] && at[i] <= time) {
                if (priority[i] < highestPriority) {
                    highestPriority = priority[i];
                    index = i;
                }
            }
        }

        // CPU idle
        if (index == -1) {
            time++;
            continue;
        }

        // Execute process
        time += bt[index];

        ct[index] = time;
        tat[index] = ct[index] - at[index];
        wt[index] = tat[index] - bt[index];

        completed[index] = true;
        completedCount++;
    }

    cout << "\nPID\tAT\tBT\tPriority\tCT\tTAT\tWT\n";

    float avgWT = 0;
    float avgTAT = 0;

    for (int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << priority[i] << "\t\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << endl;

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    cout << "\nAverage Waiting Time = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n;

    return 0;
}