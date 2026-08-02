#include <bits/stdc++.h>
using namespace std;

int sum = 0;

void SumOfN(int n) {

    if (n == 0)
        return;

    sum += n;

    SumOfN(n - 1);
}

int main() {

    int n;

    cout << "Whats Your N = ";
    cin >> n;

    SumOfN(n);

    cout << sum;
}