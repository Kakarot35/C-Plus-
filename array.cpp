#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];

    for(int i = 0; i <= 4; i++)
    {
        cout << "Enter the elements "<< i + 1 << ":";
        cin >> arr[i];
    }

    cout << "This is the Array = ";

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    
}
