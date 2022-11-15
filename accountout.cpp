#include <iostream>
#include <sstream>
#include <iomanip>
#include "define.h"

void accountOut(bank_account* acc)
{
	std::string resp = "Ваш счёт: ";

	std::string	number = std::to_string(acc->number);
//	std::string	balance = std::to_string(acc->balance);
//	double to String with Custom Precision using ostringstream

	std::ostringstream streamObj;
	streamObj << std::fixed;
	streamObj << std::setprecision(2);
	streamObj << acc->balance;

	std::string balance = streamObj.str();

	resp += acc->name + ", " + number + ", " + balance;

	outStr(resp);
}
