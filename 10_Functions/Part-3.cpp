// Built-in functions

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = min(num1, num2);
    // int maximum = max(num1, num2);
    cout << "The smallest number is " << minimum << endl;
    // cout << "The largest number is " << maximum << endl;
    return 0;
}