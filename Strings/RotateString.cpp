#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcde";
    string goal = "cdeab";

    for(int i = 0; i < s.size(); i++){
        if( s != goal){
            char first = s[0];
            s.erase(0,1);
            s = s + first;
        }
        else{
            return true;
        }
    }
    return false;
}