#include <iostream> //header
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main()
{
    string nama;
    char kom, JenisKelamin;
    int nim;
    float ip;

    cout<< "Hello World" << endl;

    cout << "Masukkan nama anda : "; 
    // cin >> nama;
    getline(cin, nama);

    cout << "Masukkan KOM anda : "; 
    cin >> kom;

    cout << "Masukkan NIM anda : "; 
    cin >> nim;

    cout << "Masukkan IP anda : "; 
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : ";
    JenisKelamin = getche(); //agar karakter langsung tampil tanpa harus menekan enter
    
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(JenisKelamin); //untuk menampilkan karakter

    getch();

}