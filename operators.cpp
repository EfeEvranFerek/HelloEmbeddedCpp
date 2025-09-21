#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 4;


    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;


    cout << "a > b ? " << (a > b) << endl;
    cout << "a == b ? " << (a == b) << endl;

    bool x = true, y = false;
    cout << "x && y = " << (x && y) << endl;
    cout << "x || y = " << (x || y) << endl;
    cout << "!x = " << (!x) << endl;


    return 0;
}