#include <iostream>
#include <string>
using namespace std;

int userInput() {
    int feet;
    int inches;

    cout << "Enter feet and inches to be converted, separated by a space: ";
    cin >> feet >> inches;

    inches = inches + (feet * 12);

    return inches;
}

double inchesToCM(int inches) {
    double centimeters;

    centimeters = (double) inches * 2.54; //Source: google

    return centimeters;
}

double cmToMeters(double centimeters) {
    double meters = centimeters / 100;

    return meters;
}

void metricOutput(double meters, double centimeters) {
    cout <<"Input is equal to: " << endl;
    cout << meters <<" meters, or " << centimeters <<" centimeters." << endl;
}


int main(int argc, char const *argv[]) {
    bool x = true; // counter for while loop, sets for false when user exits.
    string command;
    int imperialUnits; //units input through userInput function
    double mtrs; // Assigned by cmToMeters
    double cmtrs; // Assigned by inchesToCM

    cout << "Would you like to convert units, or exit?" << endl;

    while (x) {
        cout << "Type \"convert\" to convert feet and inches " << endl;
        cout << "to the metric system" << endl;
        cout << "Or \"exit\" to exit program" << endl;

        cin >> command;

        if (command == "exit") {
            x = false;
        } else if (command == "convert") {
            imperialUnits = userInput();
            cmtrs = inchesToCM(imperialUnits);
            mtrs = cmToMeters(cmtrs);

            metricOutput(mtrs, cmtrs);
        } else {
            cout << "Invalid input" << endl;
        }
    }

    return 0;
}
