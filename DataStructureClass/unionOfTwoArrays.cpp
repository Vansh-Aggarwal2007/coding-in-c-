#include <iostream>

using namespace std;

void merge(const int a[], const int b[], int n, int m, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if(a[i] == b[j]) {
            c[k] = a[i];
            i++;
            j++;
            k++;
        } else if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k ++;
    }

    while (i < n) {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < m) {
        c[k] = b[j];
        j++;
        k++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int* a = new int[n];
    int* b = new int[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int* c = new int[n + m];
    merge(a, b, n, m, c);

    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }

    return 0;
}