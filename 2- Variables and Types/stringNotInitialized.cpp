#include <iostream>

using namespace std;

int main()
{
    string mystring;
    mystring = "This is the Initial Content of the string";
    cout << mystring << endl;
    mystring = "This is a different string";
    cout << mystring << endl;
    cout << mystring.length() << endl;
    cout << mystring.find("is") << endl;
    return 0;
}