#include <iostream>
#include <string>

using namespace std;


struct Mahasiswa {
    string nama;
    string nim;
    int usia;
    int jurusan;
};

int main() {
    const int maks_mhs = 50;
    int total_mhs;
    Mahasiswa mhs[maks_mhs];

    cout <<"masukkan jumlah mahasiswa :";
    cin >>total_mhs;

    for (int a = 0; a < total_mhs; a++) {
        cout << "mahasiswa " << a + 1 << "--> "<< endl;
        cout << "nama mahasiswa: ";
        cin >> mhs[a].nama;
        cout << "Masukkan nim : ";
        cin >> mhs[a].nim;
        cout << "Masukkan usia : ";
        cin >> mhs[a].usia;
        cout << "Masukkan jurusan : ";
        cin >> mhs[a].jurusan;


    for (int i = 0; i < total_mhs; i++) {
        cout << "Detail Mahasiswa " << i + 1 << ": ";
        cout << mhs[a].nama << ", "
             << mhs[a].nim << ", "
             << mhs[a].usia << " tahun, "
             << mhs[a].jurusan << endl;

return 0;
}
}
}
