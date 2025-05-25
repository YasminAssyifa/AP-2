#include <iostream>
using namespace std;

void sapa(string nama) // fungsi sapa
{
    cout << "Halo " << nama << " ! Selamat Datang di AP 2" << endl;
}

int main ()
{
    string NamaPengguna = "Alya";

    sapa(NamaPengguna); // memanggil fungsi sapa
}
