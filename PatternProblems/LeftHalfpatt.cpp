// Print Left Half Pyramid Pattern (Right Aligned)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        // Print leading spaces
        for(int j = 1; j <= n - i; j++){
            cout << "  ";   // two spaces for proper alignment
        }

        // Print stars
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        cout << endl;
    }
}
