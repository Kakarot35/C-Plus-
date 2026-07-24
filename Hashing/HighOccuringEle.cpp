#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> nums = {9,9,8,8,6};
    int n = nums.size();
    int max_ = nums[0];
    
    for(int i = 0; i < n; i++){
        max_ = max(max_, nums[i]);
    }

    vector <int> hash(max_+ 1, 0);
    for(int i = 0 ; i < n ; i++){
        hash[nums[i]]++;
    }

    int maxFreq = 0;
    int maxEle;
    for(int i = 0 ; i < max_;i++){
        if(hash[i] > maxFreq){
            maxFreq = hash[i];
            maxEle = i;
        }
    }
    cout << maxEle;
}