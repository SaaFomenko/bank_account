#include <string>

struct bank_account
{
	int number;
	std::string name;
	double balance;
};

void outStr(const std::string msg, char end = '\n');
void initAccount(bank_account* acc);
void balanceUp(bank_account* acc);
void accountOut(bank_account* acc);
