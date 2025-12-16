#include <iostream>
using namespace std;

int fibonacciDinamis(int n) {
    if (n <= 1) return 1;
    int hasil[100];
    hasil[0] = 1;
    hasil[1] = 1;
    for (int i = 2; i <= n; i++)
        hasil[i] = hasil[i - 2] + hasil[i - 1];
    return hasil[n];
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Fibonacci ke-" << n << " adalah " << fibonacciDinamis(n) << endl;
    return 0;
}