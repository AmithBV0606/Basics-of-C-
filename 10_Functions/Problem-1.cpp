#include <iostream>
#include <string>
using namespace std;

// Take 2 numbers and print it's sum.

int printSum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int result = printSum(a, b);
    cout << "Sum is " << result << endl; 
    return 0;
}