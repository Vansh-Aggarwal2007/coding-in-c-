#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int D, M, Y;
    cin >> D >> M >> Y;
    int MDIM;
    if(M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) {
        MDIM = 31;
    } else if(M == 4 || M == 6 || M == 9 || M == 11) {
        MDIM = 30;
    } else {
        if(isLeapYear(Y)) 
            MDIM = 29;
        else 
            MDIM = 28;
    }
    if(D == MDIM) {
        if(M == 12) {
            D = 1;
            M = 1;
            Y++;
        } else {
            D = 1;
            M ++;
        }
    } else {
        D ++;
    }
    cout << "Day: " << D << " Month: " << M << " Year: " << Y;
}

