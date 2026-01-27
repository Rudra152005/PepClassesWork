#include <iostream>
using namespace std;

int main() {
    int arr1D[16] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arr2D[4][4];

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            arr2D[i][j] = arr1D[i * 4 + j];
        }
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }
}
