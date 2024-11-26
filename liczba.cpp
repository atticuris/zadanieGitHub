#include <iostream>
#include <cmath>

using namespace std;

bool czy_bezkwadratowa(int liczba) {
    for (int x = 2; x * x <= liczba; ++x) {
        if (liczba % (x * x) == 0) {
        	return false;
        }
    }
    return true;
}

using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba <= 0) {
        cout << "Podana liczba nie jest dodatnia. Program zakonczony." << endl;
        return 1;
    }

    return 0;
}

