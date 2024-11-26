#include <iostream>
using namespace std;

// Write a program that takes age as input and print if you are adult or not.

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are adult";
    }
    else
    {
        cout << "You are NOT an adult";
    }
    return 0;
}