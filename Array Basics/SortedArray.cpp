#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {5,4,3,2,1};
    int n = 5;
    bool sorted = true;
    for(int i =0; i < n; i++){
       if(arr[i] + 1 == arr[i+1]){
            sorted = true;
       }
       else{
        sorted = false;
        break;
       }
    }
    cout << "Is sorted = " << sorted;
}