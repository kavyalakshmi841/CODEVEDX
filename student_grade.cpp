#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;

    if (average >= 90)
        cout << "Grade = A";
    else if (average >= 75)
        cout << "Grade = B";
    else if (average >= 60)
        cout << "Grade = C";
    else if (average >= 40)
        cout << "Grade = D";
    else
        cout << "Grade = Fail";

    return 0;
}