    #include <bits/stdc++.h>
    using namespace std;

    int main(){
        string s = "hannah";

        int n = s.size();
        int left = 0;
        int right = n -1;
        
        bool IsPalidrom = false;

        while(left < right){
            if(s[left] == s[right]){
                IsPalidrom = true;
            }
            left++;
            right--;
        }

        cout << "IsPalidrom = " << IsPalidrom; 

    }+3
    