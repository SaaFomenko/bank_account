#include <iostream>
#include "define.h"

void initAccount(bank_account* acc)
{
	const std::string query = "Введите ";
	const std::string label_number = query + "номер счета:";
	const std::string label_name = query + "имя владельца:";
	const std::string label_balance = query + "баланс:";

	outStr(label_number, ' ');
	std::cin >> acc->number;

	outStr(label_name, ' ');
	std::cin >> acc->name; 

	outStr(label_balance, ' ');
	std::cin >> acc->balance; 
}
