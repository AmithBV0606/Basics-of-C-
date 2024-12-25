#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Amith";
    cout << name[0] << endl;

    // To know the length of the string
    int len = name.size();
    cout << "The length of the string is : " << len;
    return 0;
}