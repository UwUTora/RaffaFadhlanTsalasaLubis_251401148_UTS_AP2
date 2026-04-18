#include <iostream>
using namespace std;

int main() {
    string biner;

    system("cls");
    cout << "Input Kode biner: ";
    cin >> biner;
    int desimal = 0;
    for (int i = 0; i < biner.length(); i++) {
        if (biner[i] != '0' && biner[i] != '1'){
            cout << "Pesan Rusak!"; exit(0);
        }
        else {
        desimal = desimal * 2 + (biner[i] - '0'); }
    }

    cout << "Angka Desimal dari "<< biner << " adalah = " << desimal << endl;

    getchar();
}
