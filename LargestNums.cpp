#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Whats Your Number = ";
    cin >> n;
    
    int LargestNum = 0;

    while(n > 0){
        int digit = n % 10 ;

        if(digit > LargestNum){
            LargestNum = digit;
        }
        n = n/10;
    }
   cout << LargestNum;
}