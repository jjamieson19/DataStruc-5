#include "Customer.h"

void Customer::setName(std::string new_name)
{
	name = new_name;
}

std::string Customer::getName()
{
	return name;
}

int Customer::get_cust()
{
	return cust_num;
}
