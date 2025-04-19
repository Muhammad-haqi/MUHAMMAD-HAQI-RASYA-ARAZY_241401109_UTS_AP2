#include <iostream>
#include <string>
using namespace std;

int main() {
    system("CLS");
    string judul_buku;
    int jumlah_judul_buku = 0;
    
    cout << "Masukkan daftar judul buku: ";
    getline(cin, judul_buku);
    
    int i = 0;
    while (i < judul_buku.length()) {
        while (i < judul_buku.length() && judul_buku[i] == ' ') {
            i++;
        }
        
        while (i < judul_buku.length() && judul_buku[i] != ' ') {
            jumlah_judul_buku++;
            
            while (i < judul_buku.length() && judul_buku[i] != ' ') {
                i++;
            }
        }
    }
    
    cout << "Jumlah judul buku: " << jumlah_judul_buku << endl;
    
    return 0;
}