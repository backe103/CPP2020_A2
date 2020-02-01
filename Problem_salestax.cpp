#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) {
    taxRate = taxRate / (float) 100.0;
    cost = cost + (cost * taxRate);

    return cost;
}

// The main function here tests the above function.
int main(int argc, char const *argv[]) {
    float price = 18.99;
    float tax = 8.00;

    float totalPrice = addTax(tax, price);

    cout << "Price: " << price << " + " << tax << " sales tax equals " << endl;
    cout << totalPrice << endl;

    return 0;
}
