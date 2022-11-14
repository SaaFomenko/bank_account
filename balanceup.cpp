#include <iostream>
#include "define.h"

void balanceUp(bank_account* acc)
{
	const std::string query = "Введите новый баланс:";

	outStr(query, ' ');

	std::cin >> acc->balance;
}
