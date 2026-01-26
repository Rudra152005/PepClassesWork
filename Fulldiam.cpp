#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half (including middle row)
    for(int i = 1; i <= n; i++) {
        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars with spaces
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half
    for(int i = n - 1; i >= 1; i--) {
        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Stars with spaces
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
