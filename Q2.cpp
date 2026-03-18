#include <iostream>
using namespace std;

class BankAccounts {
	int AccNum;
	float balance;
	static int totalAccounts;
public:

	BankAccounts(float balance = 0, int AccNum = 0) : balance(balance), AccNum(AccNum) { totalAccounts++; }
	static void Display() {
		cout << "Total Accounts created: " << totalAccounts << endl;
	}

};
int BankAccounts::totalAccounts = 0;
int main() {
	BankAccounts Meezan[5];
	BankAccounts::Display();


}