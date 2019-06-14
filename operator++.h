#pragma once
#include <iostream>
using namespace std;

class Sum
{
public:

	Sum() : x(0){}

	Sum & operator++();
	Sum  operator++(int);


	friend ostream & operator<<(ostream & out, const Sum & point);

private:
	int x;
};
