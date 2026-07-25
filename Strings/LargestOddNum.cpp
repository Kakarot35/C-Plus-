#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "0214638";

    int left = 0;
    int right = s.size() - 1;

    // Skip leading zeros
    while (left < s.size() && s[left] == '0') {
        left++;
    }

    // If string contains only zeros
    if (left == s.size()) {
        cout << "";
        return 0;
    }

    // Find rightmost odd digit
    while (right >= left) {

        if ((s[right] - '0') % 2 == 0) {
            right--;
        }
        else {
            break;
        }
    }

    // No odd digit found
    if (right < left) {
        cout << "";
        return 0;
    }

    int length = right - left + 1;

    string odd = s.substr(left, length);

    cout << odd;
}