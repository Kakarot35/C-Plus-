#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Whats your N ?";
    cin >> n;

    for(int i = 1; i <= n; i++){
        //inner loop
        for(char ch = 'A'; ch <= 'A' + n - i; ch++){
            cout << ch << " ";
        }
        cout << '\n';
    }
}