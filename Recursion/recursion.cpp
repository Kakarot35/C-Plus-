#include <iostream>
using namespace std;

void tailRecursion(int n) {
    if (n == 0)
        return;
    cout << n << " ";  // Processing before recursion
    tailRecursion(n - 1);  // Recursive call is the last action
}

void headRecursion(int n) {
    if (n > 0) {
        headRecursion(n - 1);  // Recursive call before processing
        cout << n << " ";  // Processing after recursion
    }
}


int main() {
    int n;
    cout << "Whats your N = ";
    cin >> n;
    tailRecursion(n);
    cout << '\n';
    headRecursion(n);
    return 0;
}