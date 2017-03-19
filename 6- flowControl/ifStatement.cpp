#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Ingrese un numero : " << endl;
    cin >> x;
    if(x > 0)
    {
        cout << "X is Posisitive" << endl;
    } 
    else if(x < 0)
    {
        cout << "X is negative" << endl;
    }
    else
    {
        cout << "X is 0";
    }
}