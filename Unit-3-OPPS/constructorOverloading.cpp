#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
    string holderName;
    double balance;

    public:
    Account(){
        holderName = "Unknown";
        balance = 0.0;
    }

    Account(string name ) {
        holderName = name;
        balance = 0.0;
    }
    Account(string name, double initialBlaance) {
        holderName = name;
        balance = initialBlaance;
    }

    void display () {
        cout << "Holder: " << holderName << ", Balance: $" << balance <<endl;
    }
};

int main () {
    Account acc1;
    Account acc2("Alice");
    Account acc3("Bob", 500.50);

    acc1.display();
    acc2.display();
    acc3.display();
}