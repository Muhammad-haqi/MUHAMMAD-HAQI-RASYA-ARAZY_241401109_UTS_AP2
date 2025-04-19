#include <iostream>
using namespace std;

int main() {
    system("CLS");
    string nama;
    string nim;
    int nilai1, nilai2, nilai3;
    float rata_rata;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah:\n";
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilai1;
    cout << "Probabilitas dan Statistika: ";
    cin >> nilai2;
    cout << "Sistem Operasi: ";
    cin >> nilai3;

    rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;

    cout << "Algoritma dan Pemrograman: ";
    if (nilai1 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Probabilitas dan Statistika: ";
    if (nilai2 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "Sistem Operasi: ";
    if (nilai3 >= 60)
        cout << "Lulus." << endl;
    else
        cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;

    cout << "\nRata-rata nilai semester: " << rata_rata << endl;
    cout << "Status keseluruhan: " << (rata_rata >= 60 ? "LULUS" : "TIDAK LULUS") << endl;

    return 0;
}