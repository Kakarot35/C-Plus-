#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Whats is your n ? ";
    cin >> n;
    //Outer Loop
    for(int i = 0; i <= n; i++){
        //inner loop
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << '\n';
    }
}