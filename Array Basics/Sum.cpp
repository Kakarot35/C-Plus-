#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int sum = 0;
    for(int i = 0; i <= n-1; i++){
        sum += arr[i];
    }
cout << sum;
}