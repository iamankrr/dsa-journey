#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter Rate: ";
    cin >> rate;

    cout << "Enter Time: ";
    cin >> time;

    float simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << simpleInterest << endl;

    return 0;
}