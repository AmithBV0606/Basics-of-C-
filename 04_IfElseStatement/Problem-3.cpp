#include <iostream>
using namespace std;

/*
Take the age from the user and then decide accordingly
1. If age < 18,
   print -> not eligible for job
2. If age >= 18,
   print -> "eligible for job"
3. If age >= 55 and age <= 57,
   print -> "eligible for job, but retirement soon."
4. If age > 57
   print -> "retirement time"
*/

int main()
{
    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "You are not eligible for JOB!";
    }
    else if (age >= 18)
    {
        if (age < 55)
        {
            cout << "You are eligible for JOB!";
        }
        else if (age >= 55 && age <= 57)
        {
            cout << "You are eligible for JOB!, but will soon get retired!";
        }
        else
        {
            cout << "Retirement time!!";
        }
        return 0;
    }
}