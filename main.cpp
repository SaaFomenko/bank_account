#include <iostream>
#include "define.h"

int main()
{
	bank_account acc;

	initAccount(&acc);
	balanceUp(&acc);
	accountOut(&acc);

	return 0;
}
