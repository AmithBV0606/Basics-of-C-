#include <iostream>
#include <string>
using namespace std;

// 2. Parameterised functions 

void printName(string name) {
    cout << "Hey " << name << endl;
}

int main() {
    string name;
    cin >> name ;
    printName(name);

    string name2;
    cin >> name2 ;
    printName(name2);
    return 0;
}