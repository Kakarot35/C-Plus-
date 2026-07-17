#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int n;
    cout << "What's Your Number = ";
    cin >> n;

    int original = n;
    int temp = n;
    int count = 0;
    long long AS = 0;

    // Count the number of digits
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    // Reset temp
    temp = original;

    // Calculate Armstrong sum
    while (temp > 0) {
        int digit = temp % 10;
        
        AS = AS + (int)pow(digit, count); 

        temp = temp / 10;
        
    }

    cout << "Sum = " << AS << endl;

    if (AS == original) {
        cout << "Is Armstrong";
    } else {
        cout << "Not an Armstrong";
    }

    return 0;
}