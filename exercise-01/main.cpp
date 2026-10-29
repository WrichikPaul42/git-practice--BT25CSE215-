#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! Welcome to Exercise 1.\n";

    int a, b;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    cout << "The sum of " << a << " and " << b << " is " << (a + b) << ".\n";

    return 0;
}