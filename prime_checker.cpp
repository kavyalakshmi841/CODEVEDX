#include <iostream>
using namespace std;

int main() {
    int n, i, flag = 0;

    cin >> n;

    if (n <= 1)
        flag = 1;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        cout << "Prime";
    else
        cout << "Not Prime";

    cout << endl;

    int N;
    cin >> N;

    for (int num = 2; num <= N; num++) {
        int isPrime = 1;
        for (int j = 2; j <= num / 2; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
            cout << num << " ";
    }

    return 0;
}