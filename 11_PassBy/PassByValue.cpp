#include <iostream>
#include <string>
using namespace std;

void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num); // original number does not goes
    cout << num << endl;
    // The output for the line 16 will be 10, this is called as pass by value.
    // When the arguement is sent with the function, a copy of the original value is sent inside the function.
    return 0;
}