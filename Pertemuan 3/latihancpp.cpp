#include <iostream>
using namespace std;

int main ()
{
    int nilai;
    
    cout << "Masukkan bilangan bulat: ";
    cin >> nilai;

    if ((nilai % 5 == 0) && (nilai % 10 == 0)) // jika nilai mod 5 sama dengan 0 DAN nilai mod 10 sama dengan 0, program akan berjalan. kedua statement harus true.
    {
        cout << "Bilangan ini habis dibagi 5 dan 10" << endl;
    }
    else if  (nilai % 5 == 0) // jika nilai mod 5 sama dengan 0, program akan berjalan.
    {
        cout << "Bilangan ini habis dibagi 5" << endl;
    }
    else if  (nilai % 10 == 0) // jika nilai mod 10 sama dengan 0 maka program akan berjalan.
    {
        cout << "Bilangan ini habis dibagi 10" << endl;
    } else { cout << "ERROR 101" << endl; } // jika semua requirement tidak terpenuhi, maka akan ke else dan menjalankan line codenya
}
