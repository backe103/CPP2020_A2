#include <iostream>
using namespace std;

void zeroBoth(int *px, int *py) {
    *px = 0;
    *py = 0;
}

int main(int argc, char const *argv[]) {
    int a;
    int b;

    cout << "Enter an integer: " << endl;
    cin >> a;

    cout << "Enter another integer: " << endl;
    cin >> b;

    zeroBoth(&a, &b);

    cout << "integers are now: " << a << " " << b << endl;

    return 0;
}
