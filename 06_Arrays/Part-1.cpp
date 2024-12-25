#include <iostream>
using namespace std;

// 1D array

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    arr[2] += 10;
    cout << "Last element is : " << arr[2];
    return 0;
}