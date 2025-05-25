#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // variabel yang bisa digunakan dimana saja dalam program

void namaVariabel()
{
    string namaLokal = "Komputer"; // variabel yang hanya bisa digunakan didalam fungsi

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main()
{
    namaVariabel();

    // coba akses
    cout << namaGlobal;

    //coba akses
    // cout << namaLokal << endl; //ga iso
}
