#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int angka;

    cout << "Masukkan kode 3 digit: ";
    cin >> angka;

    if (angka >= 100 && angka <= 999) {
        int digit1 = angka / 100;
        int digit2 = (angka / 10) % 10 ;
        int digit3 = angka % 10;

        int total = digit1 + digit2 + digit3;

        cout << "jumlah digit = " << total << endl;
    } else {
        cout << "kode salah!" << endl;
    }

    return 0;
}
