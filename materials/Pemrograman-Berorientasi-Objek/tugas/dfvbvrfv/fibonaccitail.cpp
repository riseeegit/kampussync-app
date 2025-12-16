#include <iostream>
using namespace std;

long bantuFibonacci(long a, long b, int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    return bantuFibonacci(b, a + b, n - 1);
}

long fibonacciTail(int n) {
    return bantuFibonacci(0, 1, n);
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Fibonacci ke-" << n << " adalah " << fibonacciTail(n) << endl;
    return 0;
}