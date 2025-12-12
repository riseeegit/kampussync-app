#include <iostream>
using namespace std;

//Single Linked List Circular

struct Node1 {
    int data;
    Node1* next;
};

Node1* head1 = NULL;

void init1() {
    head1 = NULL;
}

int isEmpty1() {
    if (head1 == NULL) return 1;
    return 0;
}

void insertDepan1(int databaru) {
    Node1* baru = new Node1;
    baru->data = databaru;
    baru->next = baru;

    if (isEmpty1()) {
        head1 = baru;
    } else {
        Node1* bantu = head1;
        while (bantu->next != head1) {
            bantu = bantu->next;
        }
        baru->next = head1;
        bantu->next = baru;
        head1 = baru;
    }
    cout << "Data masuk \n";
}

void insertBelakang1(int databaru) {
    Node1* baru = new Node1;
    baru->data = databaru;
    baru->next = baru;

    if (isEmpty1()) {
        head1 = baru;
    } else {
        Node1* bantu = head1;
        while (bantu->next != head1) {
            bantu = bantu->next;
        }
        bantu->next = baru;
        baru->next = head1;
    }
    cout << "Data masuk \n";
}

void tampil1() {
    if (isEmpty1()) {
        cout << "List kosong \n";
        return;
    }
    Node1* bantu = head1;
    do {
        cout << bantu->data << " ";
        bantu = bantu->next;
    } while (bantu != head1);
    cout << endl;
}

void hapusDepan1() {
    if (isEmpty1()) {
        cout << "List kosong \n";
        return;
    }

    Node1* hapus = head1;
    int d = hapus->data;

    if (head1->next == head1) {
        head1 = NULL;
    } else {
        Node1* bantu = head1;
        while (bantu->next != head1) {
            bantu = bantu->next;
        }
        head1 = head1->next;
        bantu->next = head1;
    }
    delete hapus;
    cout << "Data " << d << " terhapus \n";
}

void hapusBelakang1() {
    if (isEmpty1()) {
        cout << "List kosong \n";
        return;
    }

    if (head1->next == head1) {
        cout << "Data " << head1->data << " terhapus \n";
        delete head1;
        head1 = NULL;
    } else {
        Node1* bantu = head1;
        while (bantu->next->next != head1) {
            bantu = bantu->next;
        }
        Node1* hapus = bantu->next;
        bantu->next = head1;
        cout << "Data " << hapus->data << " terhapus \n";
        delete hapus;
    }
}

void clear1() {
    if (isEmpty1()) return;

    Node1* bantu = head1->next;
    while (bantu != head1) {
        Node1* hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    delete head1;
    head1 = NULL;
}

int main() {
    int pilihan, data;
    do {
        cout << "\nMENU SLLC\n";
        cout << "1. Insert Depan\n";
        cout << "2. Insert Belakang\n";
        cout << "3. Hapus Depan\n";
        cout << "4. Hapus Belakang\n";
        cout << "5. Tampil\n";
        cout << "6. Clear\n";
        cout << "0. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                insertDepan1(data);
                break;
            case 2:
                cout << "Masukkan data: ";
                cin >> data;
                insertBelakang1(data);
                break;
            case 3:
                hapusDepan1();
                break;
            case 4:
                hapusBelakang1();
                break;
            case 5:
                tampil1();
                break;
            case 6:
                clear1();
                cout << "List dikosongkan\n";
                break;
        }
    } while (pilihan != 0);
    return 0;
}