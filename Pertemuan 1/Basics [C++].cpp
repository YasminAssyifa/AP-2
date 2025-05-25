#include <iostream> //header
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main()
{
    string nama; // variabel dengan tipe data teks / kumpulan karakter
    char kom, JenisKelamin; // variabel dengan tipe data karakter
    int nim; // variabel dengan tipe data bilangan bulat
    float ip; // variabel dengan tipe data bilangan desimal

    cout<< "Hello World" << endl; 
    
    // cout digunakan untuk memberikan output line "hello world"
    // cin digunakan untuk mengambil inputan user yang dimasukkan kedalam suatu variabel

    cout << "Masukkan nama anda : "; 
    // cin >> nama;
    getline(cin, nama); // untuk mengambil inputan termasuk spasi

    cout << "Masukkan KOM anda : "; 
    cin >> kom;

    cout << "Masukkan NIM anda : "; 
    cin >> nim;

    cout << "Masukkan IP anda : "; 
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : ";
    JenisKelamin = getche(); //agar karakter langsung tampil tanpa harus menekan enter
    
    cout << "\n" << nama << endl; // "\n" digunakan untuk new line lalu di lanjutkan dengan output variabel nama
    cout << kom << endl; // output dari variabel kom
    cout << nim << endl; //output dari variabel nim
    cout << ip << endl; // output dari variabel ip
    putchar(JenisKelamin); //untuk menampilkan karakter

    getch(); //untuk membaca inputan karakter dr keyboard

}
