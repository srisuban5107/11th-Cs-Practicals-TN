#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n\n\t\tMENU\n";
        cout << "1. Decimal to Binary number\n";
        cout << "2. Binary to Decimal number\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1/2/3): ";
        cin >> choice;

        if (choice == 1) {
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            if (decimal == 0) {
                cout << "0 in decimal = 0 in binary.\n";
                continue;
            }
            string binary = "";
            int temp = decimal;
            while (decimal > 0) {
                binary = char('0' + (decimal % 2)) + binary;
                decimal /= 2;
            }
            cout << temp << " in decimal = " << binary << " in binary.\n";
        }
        else if (choice == 2) {
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            int decimal = 0;
            bool valid = true;
            for (char bit : binary) {
                if (bit != '0' && bit != '1') {
                    valid = false;
                    break;
                }
                decimal = decimal * 2 + (bit - '0');
            }
            if (valid)
                cout << binary << " in binary = " << decimal << " in decimal.\n";
            else
                cout << "Invalid binary number.\n";
        }
        else if (choice == 3) {
            cout << "Exiting program.\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
