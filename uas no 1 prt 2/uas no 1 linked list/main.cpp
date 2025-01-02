#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int usia;
    string jurusan;
    Mahasiswa* next; // ponter next mhs
};

// Fungsi Linked List
void tambahMahasiswa(Mahasiswa*& head, string nama, string nim, int usia, string jurusan) {
    Mahasiswa* newMahasiswa = new Mahasiswa(); // Alokasi memori untuk mahasiswa baru
        newMahasiswa->nama = nama;
        newMahasiswa->nim = nim;
        newMahasiswa->usia = usia;
        newMahasiswa->jurusan = jurusan;
        newMahasiswa->next = nullptr;

    if (head == nullptr) { //jika kosong
        head = newMahasiswa;
        } else { // jika ada data
        Mahasiswa* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
        }
        temp->next = newMahasiswa;
    }
}

void tampilkanMahasiswa(Mahasiswa* head) {
    Mahasiswa* temp = head;
    int index = 1;
        while (temp != nullptr) {
            cout << "Detail Mahasiswa " << index++ << ": ";
            cout << temp->nama << ", "
                 << temp->nim << ", "
                 << temp->usia << " tahun, "
                 << temp->jurusan << endl;
        temp = temp->next;
    }
}

int main() {
    int total_mhs;
    string nama, nim, jurusan;
    int usia;

    Mahasiswa* head = nullptr; // Head Linked List

        cout << "Masukkan jumlah mahasiswa: ";
        cin >> total_mhs;

            for (int i = 0; i < total_mhs; i++) {
                cout << "Mahasiswa " << i + 1 << " -->" << endl;
                cout << "Nama Mahasiswa: ";
                cin >> nama;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Usia: ";
                cin >> usia;
                cout << "Masukkan Jurusan: ";
                cin >> jurusan;

            tambahMahasiswa(head, nama, nim, usia, jurusan);
    }

    tampilkanMahasiswa(head);

    return 0;
}
