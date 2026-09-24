#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> pid(n), at(n), bt(n), rt(n);
    vector<int> ct(n), wt(n), tat(n);

    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;

        cout << "Enter Arrival Time and Burst Time for P"
             << pid[i] << ": ";
        cin >> at[i] >> bt[i];

        rt[i] = bt[i];
    }

    int time = 0;
    int completed = 0;

    while (completed < n) {
        int idx = -1;
        int minRT = INT_MAX;

        // Find process with shortest remaining time
        for (int i = 0; i < n; i++) {
            if (at[i] <= time && rt[i] > 0 && rt[i] < minRT) {
                minRT = rt[i];
                idx = i;
            }
        }

        // CPU is idle
        if (idx == -1) {
            time++;
            continue;
        }

        // Execute for 1 unit
        rt[idx]--;
        time++;

        // Process completed
        if (rt[idx] == 0) {
            completed++;

            ct[idx] = time;
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
        }
    }

    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";

    float avgWT = 0, avgTAT = 0;

    for (int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << "\n";

        avgWT += wt[i];
        avgTAT += tat[i];
    }

    cout << "\nAverage Waiting Time = " << avgWT / n;
    cout << "\nAverage Turnaround Time = " << avgTAT / n;

    return 0;
}