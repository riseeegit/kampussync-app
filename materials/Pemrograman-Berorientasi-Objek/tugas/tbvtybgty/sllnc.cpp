#include <iostream>
using namespace std;

//Single Linked List Non Circular

struct Node2 {
    int data;
    Node2* next;
};

Node2* head2 = NULL;

void init2() {
    head2 = NULL;
}

int isEmpty2() {
    if (head2 == NULL) return 1;
    return 0;
}

void insertDepan2(int databaru) {
    Node2* baru = new Node2;
    baru->data = databaru;
    baru->next = head2;
    head2 = baru;
    cout << "Data masuk \n";
}

void insertBelakang2(int databaru) {
    Node2* baru = new Node2;
    baru->data = databaru;
    baru->next = NULL;

    if (isEmpty2()) {
        head2 = baru;
    } else {
        Node2* bantu = head2;
        while (bantu->next != NULL) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
    cout << "Data masuk \n";
}

void tampil2() {
    if (isEmpty2()) {
        cout << "List kosong \n";
        return;
    }

    Node2* bantu = head2;
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }
    cout << endl;
}

void hapusDepan2() {
    if (isEmpty2()) {
        cout << "List kosong \n";
        return;
    }

    Node2* hapus = head2;
    head2 = head2->next;
    cout << "Data " << hapus->data << " terhapus \n";
    delete hapus;
}

void hapusBelakang2() {
    if (isEmpty2()) {
        cout << "List kosong \n";
        return;
    }

    if (head2->next == NULL) {
        cout << "Data " << head2->data << " terhapus \n";
        delete head2;
        head2 = NULL;
    } else {
        Node2* bantu = head2;
        while (bantu->next->next != NULL) {
            bantu = bantu->next;
        }
        Node2* hapus = bantu->next;
        bantu->next = NULL;
        cout << "Data " << hapus->data << " terhapus \n";
        delete hapus;
    }
}

void clear2() {
    Node2* bantu;
    while (head2 != NULL) {
        bantu = head2;
        head2 = head2->next;
        delete bantu;
    }
}

int main() {
    int pilihan, data;
    do {
        cout << "MENU SLLNC\n";
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
                insertDepan2(data);
                break;
            case 2:
                cout << "Masukkan data: ";
                cin >> data;
                insertBelakang2(data);
                break;
            case 3:
                hapusDepan2();
                break;
            case 4:
                hapusBelakang2();
                break;
            case 5:
                tampil2();
                break;
            case 6:
                clear2();
                cout << "List dikosongkan\n";
                break;
        }
    } while (pilihan != 0);
    return 0;
}