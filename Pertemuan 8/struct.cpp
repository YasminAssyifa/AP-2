#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat
{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;  
    Alamat alamat; // nester struct, menggunakan struct lain didalam struct
};

int main()
{
    system("CLS");

    Mahasiswa mhs1;

    // mhs1.nama = "Yasmin";
    // mhs1.umur = 18;
    // mhs1.ipk = 4.00;

    // mhs1.alamat.jalan = "SM Raja";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20147;

    // cout << "Alamat = " << mhs1.alamat.jalan << ", " << mhs1.alamat.kota << ", " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa; // vektor dari suatu struct
    int n;
    cout << "Masukkan banyak mahasiswa : "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa " << i+1 << endl;
        
        cin.get();

        cout << "Masukkan nama : "; getline(cin, mhs1.nama);
        cout << "Masukkan umur : "; cin >> mhs1.umur;
        cout << "Masukkan IPK : "; cin >> mhs1.ipk;
        mahasiswa.push_back(mhs1); //memasukkan data ke dalam array
    }

    // mengisi data mahasiswa menggunakan vektor dan struct. Vektor dengan index 0, structnya, diisi satu per satu
    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa " << i+1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
}
