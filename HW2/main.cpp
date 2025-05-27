#include"BankAccount.h"
#include"Bank.h"

int main(int argc, char* argv[])
{
	BankAccount a1("121", 1, "name1");
	BankAccount a2("302", 22, "name2");
	BankAccount a3("2443", 33.44, "name3");
	Bank bank;
	bank.AddAccount(&a1);
	bank.AddAccount(&a2);
	bank.AddAccount(&a3);
	a1.Deposit(444);
	a2.Deposit(55555);
	a3.Withdraw(66666);
	bank.PrintAllAccounts();
	printf("Total balance: %.2lf\n", bank.GetTotalBalance());
	return 0;
}