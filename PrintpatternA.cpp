#include <iostream>
using namespace std;

// Function to display alphabet pattern
void display(int n)
{
    // Outer for loop for number of lines
    for (int i = 0; i < n; i++) {

        // Inner for loop for logic execution
        for (int j = 0; j <= n / 2; j++) {

            // prints two column lines
            if (i==0 || j==0 || j==n/2 || i==n/2)
            {
                if(i==0  && (j==0 || j==n/2))
                cout<<" ";
                else
                cout<<"*";
            }
            else
                cout << " ";
        }

        cout << '\n';
    }
}
// Driver Function
int main()
{
    int n;
    cin >> n;
    display(n);
    return 0;
}