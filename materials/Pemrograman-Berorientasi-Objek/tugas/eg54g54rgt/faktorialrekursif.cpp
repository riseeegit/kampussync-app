#include <iostream>
using namespace std;

int faktorialRekursif(int n) {
    if (n < 0)
        return 0;
    else if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorialRekursif(n - 1);
}

int main() {
    int n;
    cout << "Masukkan nilai faktorial: ";
    cin >> n;
    cout << "Hasil faktorial: " << faktorialRekursif(n) << endl;
    return 0;
}