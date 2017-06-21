#ifndef CHECKING_H_
#define CHECKING_H_
#include "Account.h"

class CheckingAccount : public Account {
public:
	CheckingAccount(Customer *cust, int id) : Account(cust, id) {};
	std::string to_string() {
		std::stringstream ss;
		ss << "Customer: " << customer << std::endl;
		ss << "Account type: Checking" << std::endl;
		ss << "Balance: " << balance << std::endl;
		ss << "Account ID: " << account_number << std::endl;
		return ss.str();
	};
	void add_interest()
	{
		int interest_rate = this->get_customer()->get_interestC();
		int interest = interest_rate*(this->balance);
		balance = (balance + interest);
	};
};
#endif