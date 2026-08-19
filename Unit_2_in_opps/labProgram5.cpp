#include <iostream>

using namespace std;

class BankAccount {
private:
	double balance;

public:
	BankAccount(double initialBalance) : balance(initialBalance) {}

	void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
			cout << "Deposited: " << amount << endl;
		} else {
			cout << "Deposit amount must be positive." << endl;
		}
	}

	void withdraw(double amount) {
		if (amount <= 0) {
			cout << "Withdrawal amount must be positive." << endl;
		} else if (amount > balance) {
			cout << "Insufficient balance." << endl;
		} else {
			balance -= amount;
			cout << "Withdrawn: " << amount << endl;
		}
	}

	double getBalance() const {
		return balance;
	}
};

int main() {
	BankAccount account(1000.00);

	cout << "Initial balance: " << account.getBalance() << endl;
	account.deposit(500.00);
	account.withdraw(250.00);
	account.withdraw(2000.00);
	cout << "Final balance: " << account.getBalance() << endl;

	return 0;
}