#include <iostream>
using namespace std ;

merge(int a [], int l, int r, int mid) {
    int n = mid - l + 1;
    int m = r - mid ;
    int l[n];
    int r[m];
    for (int i = 0; i < n; i ++) {
        l[i] = a[l + i];
    }
    for (int j = 0; j < m; j ++) {
        r[j] = a[mid + j + 1];
    }
    int i = 0, j = 0, k = l;
    while (i < n && j < m) {
        if (l[i] < r[j]) {
            a[k] = l[i];
            i ++;
        }
    }
}