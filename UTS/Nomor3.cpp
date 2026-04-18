#include <iostream>
using namespace std;

int main() {
    char nama[50];
    int nim;
    float algoritma, probabilitas, sistem;
    float rata_rata;

    system("cls");
    cout << "Nama: "; 
    cin >> nama;
    cout << "NIM: "; 
    cin >> nim;
    cout << "Algoritma dan Pemrograman: "; 
    cin >> algoritma;
    cout << "Probabilitas dan Statistika: "; 
    cin >> probabilitas;
    cout << "System Informasi: "; 
    cin >> sistem;

    system("cls");
    if  (algoritma >= 60) {
        cout << "Algoritma dan Pemrograman: Lulus" << endl;
    } else {
        cout << "Algoritma dan Pemrograman: Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;
    }
    if (probabilitas >= 60) {
        cout << "Probabilitas dan Statistika: Lulus" << endl;
    } else {
        cout << "Probabilitas dan Statistika: Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;
    }
    if (sistem >= 60) {
        cout << "System Informasi: Lulus" << endl;
    } else {
        cout << "System Informasi: Tidak Lulus. Silahkan Ulangi di Tahun Depan!" << endl;
    }
    rata_rata = (algoritma + probabilitas + sistem) / 3;
    cout << "Nilai Rata Rata: " << rata_rata << endl;
}