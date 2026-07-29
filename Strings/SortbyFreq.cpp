#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<char> finalArr;
    string s;

    cout << "Enter string: ";
    cin >> s;

    unordered_map<char, int> Frequency;

    // Store frequency
    for (int i = 0; i < s.size(); i++) {
        Frequency[s[i]]++;
    }

    // Store unique characters
    for (auto it : Frequency) {
        finalArr.push_back(it.first);
    }

    // Sort by frequency
    sort(finalArr.begin(), finalArr.end(),
        [&](char a, char b) {

            // Higher frequency comes first
            if (Frequency[a] != Frequency[b]) {
                return Frequency[a] > Frequency[b];
            }

            // Same frequency -> smaller character first
            return a < b;
        }
    );

    // Print answer
    for (char ch : finalArr) {
        cout << ch << " ";
    }

    return 0;
}