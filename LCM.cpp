#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cout << "What's Your N1 = ";
    cin >> n1;
    cout << "What's Your N2 = ";
    cin >> n2;

    int LCM = 1;

   for (int i = 1; ; i++) {

    int multiple = max(n1, n2) * i;

    if (multiple % n1 == 0 && multiple % n2 == 0) {
        LCM = multiple;
        break;
    }
}
    cout << "LCM = " << LCM;
}