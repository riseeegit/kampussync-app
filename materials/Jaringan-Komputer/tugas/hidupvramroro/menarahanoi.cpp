#include <iostream>
using namespace std;

void menara(int n, char awal, char tujuan, char bantu) {
    if (n == 1)
        cout << "Pindahkan piringan 1 dari " << awal << " ke " << tujuan << endl;
    else {
        menara(n - 1, awal, bantu, tujuan);
        cout << "Pindahkan piringan " << n << " dari " << awal << " ke " << tujuan << endl;
        menara(n - 1, bantu, tujuan, awal);
    }
}

int main() {
    int n;
    cout << "Berapa jumlah piringan? ";
    cin >> n;
    menara(n, 'A', 'C', 'B');
    return 0;
}