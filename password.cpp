#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate password
string generatePassword(int length, bool useUpper, bool useLower, bool useDigits, bool useSymbols) {
    string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lower = "abcdefghijklmnopqrstuvwxyz";
    string digits = "0123456789";
    string symbols = "!@#$%^&*()_+";

    string all = "";

    if (useUpper) all += upper;
    if (useLower) all += lower;
    if (useDigits) all += digits;
    if (useSymbols) all += symbols;

    if (all.empty()) return "Invalid selection!";

    string password = "";
    for (int i = 0; i < length; i++) {
        password += all[rand() % all.size()];
    }

    return password;
}

int main() {
    srand(time(0));

    int length;
    char choice;

    bool useUpper, useLower, useDigits, useSymbols;

    cout << "==== Password Generator ====\n";

    cout << "Enter password length: ";
    cin >> length;

    cout << "Include uppercase letters? (y/n): ";
    cin >> choice;
    useUpper = (choice == 'y' || choice == 'Y');

    cout << "Include lowercase letters? (y/n): ";
    cin >> choice;
    useLower = (choice == 'y' || choice == 'Y');

    cout << "Include digits? (y/n): ";
    cin >> choice;
    useDigits = (choice == 'y' || choice == 'Y');

    cout << "Include symbols? (y/n): ";
    cin >> choice;
    useSymbols = (choice == 'y' || choice == 'Y');

    string password = generatePassword(length, useUpper, useLower, useDigits, useSymbols);

    cout << "\nGenerated Password: " << password << endl;

    return 0;
}

