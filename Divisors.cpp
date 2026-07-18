#include <bits/stdc++.h>
using namespace std;

vector<int> getDivisors(int n) {

    vector<int> Div;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            Div.push_back(i);
        }
    }

    return Div;
}

int main() {
    int n;

    cout << "What's Your N = ";
    cin >> n;

    vector<int> result = getDivisors(n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}