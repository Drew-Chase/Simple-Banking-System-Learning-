// LFInteractive LLC. (c) 2020-2024 All Rights Reserved
#include "BankAccount.h"
#include <iostream>
#include <cstdlib>

int BankAccount::generate_unique_account_number()
{
	int random = rand();
	return 0;
}

BankAccount::BankAccount(int accountNumber, double balance, string accountHolderName)
{
	this->accountNumber = accountNumber;
	this->balance = balance;
	this->accountHolderName = accountHolderName;
}

int BankAccount::getAccountNumber()
{
	return this->accountNumber;
}

double BankAccount::getBalance()
{
	return this->balance;
}

string BankAccount::getAccountHolderName()
{
	return this->accountHolderName;
}

void BankAccount::setAccountNumber(int accountNumber)
{
	this->accountNumber = accountNumber;
}

void BankAccount::setBalance(double balance)
{
	this->balance = balance;
}

void BankAccount::setAccountHolderName(string accountHolderName)
{
	this->accountHolderName = accountHolderName;
}

void BankAccount::deposit(double amount)
{
	this->balance += amount;
}

void BankAccount::withdraw(double amount)
{
	double new_balance = this->balance - amount;
	if (new_balance > 0)
	{
		this->balance -= amount;
	}
	else
	{
		std::cout << "Insufficient funds" << std::endl;
	}
}

void BankAccount::display()
{
	std::cout << "Account Number: " << this->accountNumber << std::endl;
	std::cout << "Account Holder Name: " << this->accountHolderName << std::endl;
	std::cout << "Balance: " << this->balance << std::endl;
}