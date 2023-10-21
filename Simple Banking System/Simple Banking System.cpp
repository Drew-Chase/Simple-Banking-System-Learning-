// LFInteractive LLC. (c) 2020-2024 All Rights Reserved

#include <iostream>
#include "BankAccount.h"

BankAccount* selectedAccount;

void prompt_create_account()
{
	std::cout << "Create a new account:" << std::endl;

	printf("Account Holder Name: ");
	std::string accountHolderName;
	std::cin >> accountHolderName;

	printf("Account Balance: ");
	double accountBalance;
	std::cin >> accountBalance;

	printf("Account Number: ");
	int accountNumber;
	std::cin >> accountNumber;

	std::cout << "Account created successfully!" << std::endl;

	selectedAccount = new BankAccount(accountNumber, accountBalance, accountHolderName);
}

void prompt_deposit()
{
	std::cout << "Deposit" << std::endl;
	if (selectedAccount == nullptr)
	{
		fprintf(stderr, "No account selected\n");
	}
	else
	{
		int amount;
		std::cout << "Enter amount to deposit: ";
		std::cin >> amount;
		selectedAccount->deposit(amount);
	}
}

void prompt_withdraw()
{
	std::cout << "Withdraw" << std::endl;
	if (selectedAccount == nullptr)
	{
		fprintf(stderr, "No account selected\n");
	}
	else
	{
		int amount;
		std::cout << "Enter amount to withdraw: ";
		std::cin >> amount;
		selectedAccount->withdraw(amount);
	}
}
void prompt_display()
{
	std::cout << "Display" << std::endl;
	if (selectedAccount == nullptr)
	{
		fprintf(stderr, "No account selected\n");
	}
	else
	{
		selectedAccount->display();
	}
}

int main()
{
	selectedAccount = nullptr;
	bool exit = false;
	while (!exit)
	{
		if (selectedAccount == nullptr)
		{
			std::cout << "Welcome to the Simple Banking System!" << std::endl;
		}
		else
		{
			std::cout << "Welcome " << selectedAccount->getAccountHolderName() << " to the Simple Banking System!" << std::endl;
		}
		std::cout << "1. Create a new account" << std::endl;
		std::cout << "2. Deposit" << std::endl;
		std::cout << "3. Withdraw" << std::endl;
		std::cout << "4. Display" << std::endl;
		std::cout << "5. Exit" << std::endl;
		std::cout << "Enter your choice: ";
		int choice;
		std::cin >> choice;
		switch (choice)
		{
			case 1:
				prompt_create_account();
				break;
			case 2:
				prompt_deposit();
				break;
			case 3:
				prompt_withdraw();
				break;
			case 4:
				prompt_display();
				break;
			case 5:
				std::cout << "Exit" << std::endl;
				exit = true;
				break;
			default:
				std::cout << "Invalid choice" << std::endl;
				break;
		}
		std::cout << std::endl;
	}
}