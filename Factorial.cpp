#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Whats Your Number = ";
    cin >> n;
    
    int Fact = 1;
    for(int i = 1; i <= n; i++){
        Fact = Fact * i;
    }
      
   cout << Fact;
}