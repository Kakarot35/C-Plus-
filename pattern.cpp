#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    
    cout << "How much:" << endl;
    cin >> n;

    for(int i = 0;i < n; i++){
        int a = i + 1;
        for(int j = 0; j <= i; j++){
            cout << a << " ";
        }
            cout << endl ; 
    }
}