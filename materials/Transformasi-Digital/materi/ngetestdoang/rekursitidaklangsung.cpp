#include <iostream>
using namespace std;

int nilai = 0;

void fungsiB();

void fungsiA() {
    if (nilai <= 20) {
        cout << nilai << " ";
        nilai++;
        fungsiB();
    }
}

void fungsiB() {
    if (nilai <= 20) {
        cout << nilai << " ";
        nilai++;
        fungsiA();
    }
}

int main() {
    fungsiA();
    return 0;
}