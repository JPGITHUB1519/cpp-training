#include <iostream>

using namespace std;



int main()
{
	// identify the type of the variable but it is used only when initializating
	int foo = 0;
	auto bar = foo;
	cout << "Using Auto : " << bar;

	// for not Initialized Variables
	int foo2 = 0;
	decltype(foo2) bar2; // the same that int : bar
	cout << "Using decltype : " << bar2;
	return 0;
}