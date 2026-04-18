#include <iostream>
using namespace std;

int main() {
    int n;

    system("cls");
    cout << "Kode : ";
    cin >> n;

    while (n % 2 == 0) {
        n /= 2;
    }

    if (n == 1) {
        cout << "iya" << endl;
    } else {
        cout << "bukan" << endl;
    }

    getchar();
}