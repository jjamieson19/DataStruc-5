#ifndef ADULT_H_
#define ADULT_H_
#include "Customer.h"

class Adult : public Customer {
private:
	const int SAVINGS_INTEREST = 0.05;
	const int CHECK_INTEREST = 0.0125;
	const int CHECK_CHARGE = 2;
	const int OVERDRAFT_PENALTY = 10;
public:
	Adult(std::string _name, std::string _address, std::string _phone_num, int _age, int num)
		:Customer(_name, _address, _phone_num, _age, num) {};
	int get_interestS() { return SAVINGS_INTEREST; }
	int get_interestC() { return CHECK_INTEREST; }
	int get_charge() { return CHECK_CHARGE; }
	int get_overdraft() { return OVERDRAFT_PENALTY; };
};
#endif