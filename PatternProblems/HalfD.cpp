// Program to print half Diamond star pattern
#include <bits/stdc++.h>
using namespace std;

void halfDiamondStar(int N)
{
    int i, j;

    // Loop to print the upper half
    // diamond pattern
    for (i = 0; i < N; i++) {
        for (j = 0; j < i + 1; j++)
            cout << "*";
        cout << "\n";
    }

    // Loop to print the lower half
    // diamond pattern
    for (i = 1; i < N; i++) {
        for (j = i; j < N; j++)
            cout << "*";
        cout << "\n";
    }
}

// Driver Code
int main()
{
    int N ;
    cin>>N;


    // Function Call
    halfDiamondStar(N);
}

