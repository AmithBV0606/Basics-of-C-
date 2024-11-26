#include<iostream>
#include<string>
using namespace std;

int main() {
    // Strings
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;

    // getline : multi word string(sentence)
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}