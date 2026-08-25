#include <iostream>
using namespace std;

void quickSort(int A[], int l, int h) {
    if (l < h) {
        int p = partition(A, l, h);
        quickSort(A, l, p-1);
        quickSort(A, p+1, h);
    }
}

int partition(int A[], int l, int h) {
    int pivot = A[h];
    int i = l-1;
    for(int j = l; j < h ; j ++) {
        if (pivot >= A[j]) {
            i++;
            swap(A[i], A[j])
        }
    }
    swap(A[i+1], A[h]);
    return (i +1);
}

int main () {
    int A = {1, 3, 4,7,9,8,2,3,5,6}
    int h = 10;
    int l = 0;

    quickSort(A, )
}