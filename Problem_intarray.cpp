#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    unsigned int arraySize; // Size of array, will not be able to go over 10.
    unsigned int inputInt; // integers to be placed in the array.
    int inputNumber; // Temporarily stores input to be checked for validity.
    bool validInput = false; // counter for while-loop ensuring valid input.
    int arrayIndex = 0; // Used for iterating through index while adding values.

    /* Given that the problem does not specify the array's specific length,
    I have decided to get it from the user. This loop repeats until the user
    enters a size that is non-negative and under 10, once validated, it
    assigns the value stored in inputNumber to arraySize */
    while (validInput == false){
        cout << "Enter desired size of array (must be 10 or less): " << endl;
        cin >> inputNumber;
        if (inputNumber <= 10 && inputNumber> 0) {
            arraySize = inputInt;
            validInput = true;
        } else {
            cout << "Invalid input, please try again!" << endl;
            continue;
        }
    }

    int numberArray[arraySize];
    validInput = false; // set to false so new loop for input validation can start.



    return 0;
}
