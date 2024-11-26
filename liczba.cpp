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

int main() {
    int liczba;
    cin >> liczba; 
    cout << liczba << endl; 

    cout << "Liczba: " << liczba << endl;
    if (bezkwadratowa) {
        cout << "Jest to liczba bezkwadratowa." << endl;
    } else {
        cout << "Nie jest to liczba bezkwadratowa." << endl;
    }

    return 0; 
}
