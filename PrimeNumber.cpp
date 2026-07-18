#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "What's Your Number = ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Is a prime number";
    }
    else {
        cout << "Not a prime number";
    }

    return 0;
}