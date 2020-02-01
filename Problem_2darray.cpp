#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a1, a2, a3, a4, a5; // inputs for lines of 2d array.
    int tempArray[5];
    int a[4][5];


    for (int i = 0; i < 4; ++i) {

        cout << "Enter 5 values for line " << i + 1 << " of 2d array";
        cin >> tempArray[0] >> tempArray[1] >> tempArray[2]
            >> tempArray[3] >> tempArray[4];

        for (int j = 0; j < 5; ++j){
            a[i][j] = tempArray[j];
        }
    }

    return 0;
}
