#include <bits/stdc++.h>
using namespace std;

void add()
{
    int a,b;

    cout << "What is your num :";
    cin >> a;

    cout << "What your Second num : ";
    cin >> b;

    cout << "Your addition is : " << a + b ;

}

int main()
{
    char choice;

    do
    {
        add();

        cout <<"\nDo you want to continue(y/n)? ";
        cin >> choice;
    }while(choice == 'y');

    return 0;
}