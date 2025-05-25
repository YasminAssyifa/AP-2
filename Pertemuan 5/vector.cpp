#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector Declaration & Initialization
    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; //mengisi vector

    // Ascending Element of Vector
    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //     cout << nama_karyawan[i] << endl;
    // }

    // for (string karyawan : nama_karyawan)
    // {
    //     cout << karyawan << endl;
    // }

    // Add data to Vector 
    nama_karyawan.push_back("Imam"); // memasukkan data/item kedalam vektor dengan index terakhir

    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from Vector
    nama_karyawan.pop_back(); // menghapus vektor index terakhir
    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus item di posisi ke 3

    for (int i = 0; i < nama_karyawan.size(); i++)
    {
        cout << nama_karyawan[i] << endl;
    }
}
