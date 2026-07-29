#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";

    unordered_map <char, int> hashS;
    unordered_map <char, int> hashT;

    for(int i =0; i < s.size(); i++){
        hashS[s[i]]++;
    }
    for(int i =0; i < s.size(); i++){
        hashT[t[i]]++;
    }

    for(auto it : hashS){
        char element = it.first;

        if(hashS[element] != hashT[element]){
            cout << "Is Not";
            break;
        }
    }
    cout<< "Is a Anagram";
}