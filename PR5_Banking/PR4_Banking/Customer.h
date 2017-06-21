#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{
private:
	std::string name;
	std::string address;
	int age;
	std::string phone_num;
	int cust_num;
public:
	Customer(std::string _name, std::string _address, std::string _phone_num, int _age, int num)
	{
		name = _name;
		address = _address;
		phone_num = _phone_num;
		age = _age;
		cust_num = num;
	}
	void setName(std::string new_name);
	std::string getName();
	int get_cust();
	virtual int get_interestS() = 0;
	virtual int get_interestC() = 0;
	virtual int get_charge() = 0;
	virtual int get_overdraft() = 0;
};


#endif