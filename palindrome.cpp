#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string rev = str;

    for (int i = 0; i < str.length() / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[str.length() - i - 1];
        rev[str.length() - i - 1] = temp;
    }

    if (str == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}