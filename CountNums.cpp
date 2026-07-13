#include <bits/stdc++.h>
using namespace std;

int countOddDigits()
{
    int n;

    cout << "Enter your number: ";
    cin >> n;

    int count = 0;

    while (n > 0)
    {
        int digit = n % 10;

        if (digit % 2 != 0)
        {
            count++;
        }

        n = n / 10;
    }

    return count;
}

int main()
{
    cout << "Odd digits = " << countOddDigits();

    return 0;
}