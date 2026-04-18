#include <iostream>
using namespace std;

int main() {
    string daftar;

    system("cls");
    cout << "Masukkan Daftar Judul Buku: ";
    getline(cin, daftar);

    int jumlahbuku = 0;
    int i = 0;

    while (i < daftar.length()) {
        if (daftar[i] != ' ' && (i == 0 || daftar[i - 1] == ' ')) {
            jumlahbuku++;
        }
        i++;
    }

    cout << "Jumlah Judul Buku: " << jumlahbuku << endl;

    getchar();
}