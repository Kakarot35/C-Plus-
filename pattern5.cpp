#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "What is N ?";
    cin >> n;
    //Rows
    for(int nRows = 1; nRows <= n; nRows++){

        //First Pyramid
        for(int i = 1; i <= nRows; i++){
            cout << i;
        }
        //For space
        for(int j = 1; j <= (2*n)-(2*nRows); j++){
            cout << " ";
        }
        //Second Pyramid
        for(int j = nRows; j >= 1; j--){
            cout << j;
        }
        //New Line
        cout << '\n';

    }
}