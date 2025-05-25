#include <iostream>
using namespace std;

int main()
{
    const float phi = 3.14; // variabel konstan yang tidak bisa diubah saat program berjalan
    float jarijari, Volume, Luas, jari;

    cout << "Masukkan Jari-Jari Bola : ";
    cin >> jarijari;

    jari = jarijari * jarijari; //menggunakan operator matekamatika "*" untuk perkalian.
    Volume = (float)4/3 * phi * jari * jarijari; // "(float)" digunakan untuk menggubah tipe data dari hasil variabel itu sendiri
    Luas = 4 * phi * jari;

    cout << "Volume Bola = " << Volume << endl;
    cout << "Luas Permukaan Bola = " << Luas << endl;

}
