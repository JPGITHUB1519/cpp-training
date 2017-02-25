#include <iostream>

using namespace std;

int main()
{
	int a = 5; 		// c-like initialization
	int b(3);		// contructor initialization
	int c{2};		// uniform initialization, c++ 11 and more only
	int result;

	a = a + b;
	result = a - c;
	cout << result;
	return 0;
}