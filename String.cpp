#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str ("");

    for(int i = 0 ; i <= 10; i++)
    {
        cout << "What is your String: ";
        cin >> str[i];
    }

    cout << "Your String is: " ;

    for(int i = 0; i <= 10; i++)
    {
        cout << str[i];
    }

    cout << "Your String size is = " << str.size();
}