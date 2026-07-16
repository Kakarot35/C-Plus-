#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Whats Your Number = ";
    cin >> n;
    int Reverse = 0;


    while(n > 0){
        int digit = n % 10;

        Reverse = Reverse * 10 + digit;

        n = n/10;
    }
    cout << Reverse;
}