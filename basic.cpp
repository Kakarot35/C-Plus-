
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int age = 9;

   if(age >= 18){
    cout << "Your are Adult";
   }
   else if(age >= 10 && age <= 18){
    cout << "Your are Teen";
   }
   else{
    cout << "Your are Child";
   }
    return 0;
}