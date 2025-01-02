#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int usia;
    string jurusan;
    Mahasiswa* next; // Pointer ke node berikutnya
};

// Fungsi untuk menambahkan mahasiswa ke Linked List
Mahasiswa* Mahasiswabaru(Mahasiswa* head, string nama, string nim, int usia, string jurusan) {
            Mahasiswa* Mahasiswabaru = new Mahasiswa(); // Alokasi memori untuk node baru
            Mahasiswabaru->nama = nama;
            Mahasiswabaru->nim = nim;
            Mahasiswabaru->usia = usia;
            Mahasiswabaru->jurusan = jurusan;
            Mahasiswabaru->next = nullptr;

    if (head == nullptr) { // Jika Linked List kosong
        head = Mahasiswabaru; // Node baru menjadi head
    } else {
        Mahasiswa* temp = head;
        while (temp->next != nullptr) { // Traverse ke node terakhir
            temp = temp->next;
        }
        temp->next = Mahasiswabaru; // Tambahkan node baru di akhir
    }
    return head; // Kembalikan head Linked List
}

// Fungsi untuk menampilkan data mahasiswa
void tampilMahasiswa(Mahasiswa* head) {
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

    Mahasiswa* head = nullptr; // Head Linked List dimulai dengan nullptr

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

        // Tambahkan mahasiswa ke Linked List dan perbarui head
        head = Mahasiswabaru(head, nama, nim, usia, jurusan);
    }

    // Tampilkan data mahasiswa
    tampilMahasiswa(head);

    return 0;
}
