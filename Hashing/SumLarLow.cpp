#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {10,9,7,7,8,8,8}; // Dynamic Array
    int n = nums.size();  // Size of Dynamic Array
    
    unordered_map <int,int> hash;
    //Preprocessing = Frequency Table
    for(int i = 0; i < n; i++){
        hash[nums[i]]++;
    }

    int MaxFreq = 0;
    int MinFreq = INT_MAX;

    for(auto it : hash){
        int element = it.first;
        int Freq = it.second;
        //Highest Frequency
        if(Freq > MaxFreq){
            MaxFreq = Freq;
        }
        
        if(Freq < MinFreq){
            MinFreq = Freq;
        }
    }
    cout << MaxFreq << " " << MinFreq << '\n';
    cout << MaxFreq + MinFreq;
}

