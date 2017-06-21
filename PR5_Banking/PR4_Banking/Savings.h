#ifndef SAVINGS_H_
#define SAVINGS_H_
#include "Account.h"

class SavingsAccount : public Account {
public:
	SavingsAccount(Customer *cust, int id) : Account(cust, id) {};
	std::string to_string() {
		std::stringstream ss;
		ss << "Customer: " << customer << std::endl;
		ss << "Account type: Savings" << std::endl;
		ss << "Balance: " << balance << std::endl;
		ss << "Account ID: " << account_number << std::endl;
		return ss.str();
	};
	
	void add_interest()
	{
		int interest_rate = this->get_customer()->get_interestS();
		int interest = interest_rate*(this->balance);
		balance = (balance + interest);
	};
};
#endif
