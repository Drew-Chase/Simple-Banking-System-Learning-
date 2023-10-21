// LFInteractive LLC. (c) 2020-2024 All Rights Reserved
#pragma once
#include <string>
using namespace std;

class BankAccount
{
private:
	int accountNumber;
	double balance;
	string accountHolderName;
	static int generate_unique_account_number();
public:
	BankAccount(int accountNumber, double balance, string accountHolderName);
	int getAccountNumber();
	double getBalance();
	string getAccountHolderName();
	void setAccountNumber(int accountNumber);
	void setBalance(double balance);
	void setAccountHolderName(string accountHolderName);
	void deposit(double amount);
	void withdraw(double amount);
	void display();
};
