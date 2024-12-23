#include <iostream>
using namespace std;

// Take the day number and print the corresponding day

int main()
{
    int number;
    cin >> number;

    switch (number)
    {
    case 0:
        cout << "Sunday";
        break;

    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    default:
        cout << "Enter a number between 0 to 6!!";
        break;
    }
    return 0;
}