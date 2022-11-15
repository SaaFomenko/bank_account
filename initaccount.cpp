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

	//Clear stream
	if(char(std::cin.peek()) == '\n')
		std::cin.ignore();

	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}

	outStr(label_name, ' ');
	std::getline(std::cin, acc->name);

	outStr(label_balance, ' ');
	std::cin >> acc->balance; 
}
