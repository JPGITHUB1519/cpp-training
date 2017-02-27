#include <iostream>

using namespace std;

// define is replacement before compiling

#define PI 3.141519
#define NEWLINE '\n'
// i can modify whatever
#define doble double

int main()
{
    doble r = 0.5;     // radius
    doble circle;
    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE; 
    return 0;
}