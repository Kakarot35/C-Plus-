# include <bits/stdc++.h>
using namespace std;

void erected_pyramid(int n);
void inverted_pyramid(int n);

int main(){
    int n;
    cout << "Whats your n ?";
    cin >> n;
    erected_pyramid(n);
    inverted_pyramid(n);
}

void erected_pyramid(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        //space
        for(int space = 1; space <= (2*n)-(2*i); space++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << '\n';
    }

}

void inverted_pyramid(int n){
    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= n -i; j++){
            cout << "*";
        }
        //Space
        for(int space = 1; space <= i*2; space++){
            cout << " ";
        }
        for(int j = 1; j <= n-i; j++){
            cout << "*";
        }
        cout << '\n';
    }
}