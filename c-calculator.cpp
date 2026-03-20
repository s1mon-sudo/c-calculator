#include <iostream>

using namespace std;

int main() {
    float zahl1, zahl2;
    char rechenzeichen;

    cout << "Erste Zahl: ";
    cin >> zahl1;

    cout << "Was soll ich tun? (+, -, *, /): ";
    cin >> rechenzeichen;

    cout << "Zweite Zahl: ";
    cin >> zahl2;

    if (rechenzeichen == '+') {
        cout << "Ergebnis: " << zahl1 + zahl2 << endl;
    } 
    else if (rechenzeichen == '-') {
        cout << "Ergebnis: " << zahl1 - zahl2 << endl;
    } 
    else if (rechenzeichen == '*') {
        cout << "Ergebnis: " << zahl1 * zahl2 << endl;
    } 
    else if (rechenzeichen == '/') {
        if (zahl2 == 0) {
            cout << "Mathe-Fail: Durch 0 teilen geht nicht!" << endl;
        } else {
            cout << "Ergebnis: " << zahl1 / zahl2 << endl;
        }
    } 
    else {
        cout << "Das Zeichen kenne ich nicht..." << endl;
    }

    return 0;
}