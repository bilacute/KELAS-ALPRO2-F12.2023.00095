#include <iostream>

using namespace std;

int Iskelipatan(int n) {
    if (n % 2 == 0) {
        cout << n << " adalah bilangan genap";
    } else {
        cout << n << " adalah bilangan ganjil";
    }

    if (n % 3 == 0) {
        cout << " dan merupakan kelipatan 3." << endl;
        return 1;
    } else {
        cout << " dan bukan kelipatan 3." << endl;
        return 0;
    }
}

int main() {
    int angka, hasil;

    cout << "Masukkan bilangan: ";
    cin >> angka;

    hasil = Iskelipatan(angka);

    return 0;
}
