#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n);

bool isPrime(int n) {

    bool isP = true;

    if (n <= 1) {
        isP = false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isP = false;
            break;
        }
    }

    if (isP) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    int count = 0;
    int n;

    cout << "What's your Number = ";
    cin >> n;

    for (int i = 2; i <= n; i++) {

        if (isPrime(i)) {
            count++;
        }
    }

    cout << count;

    return 0;
}