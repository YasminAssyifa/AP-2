#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    // Penjumlaan matriks 2x2

    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    system("CLS");

    cout << "Matriks 1" << endl;
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            cout << "Masukkan elemen baris " << i+1 << " Kolom " << j+1 << " : ";
            cin >> matriks1[i][j];
        }
    }

    cout << "Matriks 2" << endl;
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            cout << "Masukkan elemen baris " << i+1 << " Kolom " << j+1 << " : ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil Penjumlahan" << endl;
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j<2; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
}