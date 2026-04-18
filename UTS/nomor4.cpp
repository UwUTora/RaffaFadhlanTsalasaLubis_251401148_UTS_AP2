#include <iostream>
using namespace std;

int main() {
    string mantra;

    system("cls");
    cout << "Masukkan Mantra: ";
    getline(cin, mantra);

    int jumlahvocal = 0;
    int i = 0;
    while (i < mantra.length()) {
        char c = mantra[i];
        if (c == 'a' || c == 'A' ||
            c == 'i' || c == 'I' ||
            c == 'u' || c == 'U' ||
            c == 'e' || c == 'E' ||
            c == 'o' || c == 'O') {
            jumlahvocal++;
        }
        i++;
    }
    if (jumlahvocal != 0) {
        cout << "Kekuatan mantra: " << jumlahvocal << endl;
    }
    else{
    cout << "Mantra tidak valid! Tidak mengandung vokal " << endl; }
    getchar();
}