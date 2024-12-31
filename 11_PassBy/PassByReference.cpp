#include <iostream>
#include <string>
using namespace std;

// Pass by reference
void doSomething(string &s)
{
    s[0] = 'S';
    cout << s << endl;
}

int main()
{
    string s = "Amith";
    doSomething(s);
    cout << s << endl;
    return 0;
}

// Note : Arrays by default is pass by reference