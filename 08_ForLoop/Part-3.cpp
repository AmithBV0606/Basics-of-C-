#include <iostream>
#include <string>
using namespace std;

// Write a for loop which prints multiples of 5, which breaks when the number is 25.
int main()
{
    // initialization, condition, updation
    for (int i = 5; i <= 50; i = i + 5)
    {
        if (i = 25)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}