#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {1,2,2,3,3,3};
    int n = nums.size();
    
    unordered_map<int,int> hash;
    for(int i=0; i<n;i++){
        hash[nums[i]]++;
    }

    int maxFreq = 0;
    int maxEle = -1;
    int SecMaxFreq = 0;
    int SecMaxEle = -1;

    for(auto it : hash){
        int element = it.first;
        int Freq = it.second;

        if(Freq > maxFreq){
            SecMaxFreq = maxFreq;
            SecMaxEle = maxEle;

            maxFreq = Freq;
            maxEle = element;
        }

        else if(Freq > SecMaxFreq && Freq < maxFreq){
            SecMaxFreq = Freq;
            SecMaxEle = element;
        }
    }

    cout << SecMaxEle;
}