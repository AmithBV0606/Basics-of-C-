#include <iostream>
using namespace std;

// 2D array

int main()
{
    int arr[3][5];
    // Note : the spaces where values are not yet assigned, a garbage value is stored in that empty place
    arr[1][3] = 25;
    cout << arr[1][3];
    return 0;
}