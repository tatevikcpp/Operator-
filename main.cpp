#include "operator++.h"
#include <iostream>
using namespace std;

int main()
{
	Sum a;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;

	system("pause");
}