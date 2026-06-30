#include <bits/stdc++.h>
using namespace std;

int main(){
    int Marks;

    cout << "Enter Your Marks:";
    cin >> Marks;

    cout << "Your Marks are:"<< Marks << endl;

    //Marks = a;

    if(Marks >= 90){
        cout << "Grade A" << endl;
    }
    else if(Marks >= 70 && Marks < 90){
        cout << "Grade B"<< endl;
    }
    else if(Marks >= 50 && Marks < 70){
        cout << "Grade C"<< endl;
    }
    else if(Marks >= 35 && Marks < 50){
        cout << "Grade D" << endl;
    }
    else{
        cout << "Fail" << endl;
    }
    return 0;
}