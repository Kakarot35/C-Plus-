#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    
    cout << "Enter Your Numbers : " ;
    cin >> a >> b >> c;

    cout << "Your Numbers are :"  << a << ", " << b  << ", " << c << endl;

    if (a >= b)
    {
        if(a >= c)
        {
        cout << "A is largest";
        }
        else
        {
            cout << "C is largest";
     
        }
    
    }

    else if (b >= c){
        cout << "B is Largest";
    }   
    else{
            cout << "C is Largest";
        }
    
}