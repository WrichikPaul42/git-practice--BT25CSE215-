#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Greet\n";
        cout << "2. Add two numbers\n";
        cout << "3. Check Even/Odd\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Greetings, " << name << "!\n";
                break;
            }
            case 2: {
                int a, b;
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Sum: " << (a + b) << "\n";
                break;
            }
            case 3: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                if (num % 2 == 0)
                    cout << num << " is Even.\n";
                else
                    cout << num << " is Odd.\n";
                break;
            }
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}