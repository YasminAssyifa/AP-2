#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa // kumpulan variabel dengan tipe data yang berbedaa
{
    string nama;
    int umur;
    float ipk;
};

int main()
{
    Mahasiswa mhs1; // struct Mahasiswa didefinisikan sebagai mhs1
    mhs1.nama = "Yasmin"; // dari struct mhs1 dengan variabel nama
    mhs1.umur = 18;
    mhs1.ipk = 4.00;

    // cout << "Nama = " << mhs1.nama << endl;
    // cout << "Umur = " << mhs1.umur << endl;
    // cout << "IPK = " << mhs1.ipk << endl;

    // menampilkan isi struct menggunakan pointer dan tanda (->)
    Mahasiswa *ptrMhs = &mhs1;
    cout << "Nama = " << ptrMhs->nama << endl;
    cout << "Umur = " << ptrMhs->umur << endl;
    cout << "IPK = " << ptrMhs->ipk << endl;
}
