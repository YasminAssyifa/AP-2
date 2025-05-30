#include <iostream>
using namespace std;

// fungsi tanpa nilai balikan
void tampilkanPesan()
{
    cout << "==== SELAMAT DATANG DI AP 2 ====" << endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b)
{
    return a+b;
}

// fungsi overlord, fungsi dengan nama yang sama tapi tipe data yang berbeda
int kali(int a, int b)
{
    return a*b;
}

double kali( double a, double b) // fungsi dengan tipe data double
{
    return a*b;
}

// fungsi rekursif, atau fungsi yang memanggil fungsi lain atau dirinya sendiri. biasannya digunakan untuk pangkat dan faktorial.
int faktorial (int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n-1);
}

int main()
{
    system("CLS");
    
    // menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;

    // menggunakan fungsi dgn nilai balikan
    int hasilTambah = tambah(x,y); // memanggil fungsi tambah yang nanti akan memberikan nilai balik ke variabel hasilTambah

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x,y);
    double hasilKaliDouble = kali(5.5,2.0);

    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    // mencari faktorial dari 5 menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah: "<< faktorial(angka) << endl;
}
