#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int kode1, kode2, kode3;
    
    cout << "kode ke-1 : ";
    cin >> kode1;
    cout << "kode ke-2 : ";
    cin >> kode2;
    cout << "kode ke-3 : ";
    cin >> kode3;

    if (kode1 < 50 || kode2 < 50 || kode3 < 50) {
        cout << "bahaya bro" << endl;
    } else if (kode1 + kode2 + kode3 >= 200) {
        cout << "aman bro" << endl;
    } else {
        cout << "bahaya" << endl;
    }

    return 0;
}