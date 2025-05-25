#include <iostream>
using namespace std;

int main()
{
    string kalimat;
    int i;

    system("CLS");
    cout << "Masukkan kalimat : "; getline(cin, kalimat);

    // Perulangan menggunakan length, untuk i = 0, akan berjalan jika i lebih kecil dari panjang variabel kalimat, dan akan melakukan i increment saat 1 loop selesai
    for ( i = 0 ; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    return 0; // mengembalikan nilai
}
