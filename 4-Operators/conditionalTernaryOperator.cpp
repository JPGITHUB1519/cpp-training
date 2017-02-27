#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    a = 2;
    b = 7;
    // condition ? result1_True : result2_False 
    // in this case c is 7 because the evaluated expression is false
    c = (a > b) ? a : b;
    cout << c;
    return 0;
}