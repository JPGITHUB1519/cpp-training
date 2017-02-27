#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mystr;
    cout << "What's Your Name?: ";
    //cin >> mystr;
    // to get the entire line
    getline(cin, mystr);
    cout << "Hello " << mystr << endl;
    cout << "What is your favorite Team? : ";
    getline(cin, mystr);
    cout << "I like " << mystr << " Too!..." << endl;
    return 0;
}