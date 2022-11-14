#include <iostream>
#include "define.h"

void accountOut(bank_account* acc)
{
	std::string resp = "Ваш счёт: ";

	std::string	number = std::to_string(acc->number);
	std::string	balance = std::to_string(acc->balance);

	resp += acc->name + ", " + number + ", " + balance;

	outStr(resp);
}
