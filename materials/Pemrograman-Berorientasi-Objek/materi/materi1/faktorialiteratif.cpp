#include <iostream>
using namespace std;

int faktorialIteratif(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++)
        hasil *= i;
    return hasil;
}

int main() {
    int n;
    cout << "Masukkan nilai faktorial: ";
    cin >> n;
    cout << "Hasil faktorial: " << faktorialIteratif(n) << endl;
    return 0;
}