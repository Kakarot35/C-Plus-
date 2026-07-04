#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "What is your N ? ";
    cin >> n;

    for(int i = 0; i <= n-1; i++){
        // Print Space
        for(int j = 0; j <= i; j++){
            cout << ' ';
        }

        // Print Star
        for(int j = 1; j <= (2*n-1)-(2*i); j++){
            cout << "*";
        }

        // Print Space
         for(int j = 0; j <= i; j++){
            cout << ' ';
        }

        // Next Line
        cout << endl;
    }
   
}

