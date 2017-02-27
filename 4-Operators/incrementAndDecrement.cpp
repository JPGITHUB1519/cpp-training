#include <iostream>

using namespace std;

int main()
{
    int x = 3;
    // value of x after being increased
    int y = ++x;
    cout << "First Case " << endl;
    cout << "X : " << x << "\tY : " << y << endl;

    // other case

    x = 3;
    // value of x before increase
    y = x++;
    cout << "Second Case " << endl;
    cout << "X : " << x << "\tY : " << y << endl;
    return 0;
}