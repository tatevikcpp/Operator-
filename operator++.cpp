#include "operator++.h"
#include <iostream>
using namespace std;

Sum & Sum::operator++()
{
	++x;
	return *this;
}

Sum Sum::operator++(int)
{
	Sum temp = *this;
	++*this;
	return temp;
}

ostream & operator<<(ostream & out, const Sum & sum)
 {
	 out << sum.x;
	 return out;
 }