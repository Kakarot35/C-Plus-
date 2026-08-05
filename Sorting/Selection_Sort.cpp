#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(vector<int>& nums, int n);

int main() {

    int n;

    cout << "What's Your N = ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter Elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Selection_Sort(nums, n);

    return 0;
}

void Selection_Sort(vector<int>& nums, int n) {

    for (int i = 0; i <= n - 2; i++) {

        int minIndex = i;

        for (int j = i; j <= n - 1; j++) {

            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(nums[minIndex], nums[i]);
        }
    }

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
}