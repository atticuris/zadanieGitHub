#include <iostream>

using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba <= 0) {
        cout << "Podana liczba nie jest dodatnia. Program zakonczony." << endl;
        return 1;
    }

    cout << "Podana liczba to: " << liczba << endl;
    return 0;
}

