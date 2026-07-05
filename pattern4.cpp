#include <bits/stdc++.h>
using namespace std;

int main(){

        int n;
        cout << "What is your N ?";
        cin >> n;

        for (int i = 1; i <= n; i++){

            for (int j = 1; j <= n - i; j++){
                cout << " ";
            }

            for (int j = 1; j <= 2*i-1; j++){
                cout << "*";
            }
            cout << '\n';
        }

        for(int i = 0; i <= n-1; i++){
        // Print Space
             for(int j = 0; j < i; j++){
                cout << " ";
            }

        // Print Star
            for(int j = 1; j <= (2*n-1)-(2*i); j++){
            cout << "*";
            }

        // Next Line
            cout << endl;
        }
}