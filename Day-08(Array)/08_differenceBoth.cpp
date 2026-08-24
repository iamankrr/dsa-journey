#include <iostream>
using namespace std;

// Pass by Value
void passByValue(int x) {
    x = x + 10;   // only local copy changes
}

// Pass by Reference
void passByReference(int &y) { //yha & sign hoga
    y = y + 10;   // original variable changes
}

int main() {
    int a = 5, b = 5;

    cout << "Before function calls: a = " << a << ", b = " << b << endl;

    passByValue(a);      // a is passed by value
    passByReference(b);  // b is passed by reference

    cout << "After function calls: a = " << a << ", b = " << b << endl;

    return 0;
}
