#include <iostream>
using namespace std;

int main()
{
    int a,b;

    system("CLS"); // menghapus history program sebelumnya pada terminal.

    //assignment operator, memberikan nilai kepada variabel
    a = 3; 
    b = 5;

    //Arithmetical Operator
    // int tambah = a + b; //operator tambah
    // int kurang = a - b; // operator kurang
    // int kali  = a * b; // operator kali
    // float bagi = (float)a / (float)b; // operator bagi. P.S: Type Casting, berguna untuk mengubah tipe data dari sebuah varibel
    // int modulo = a % b; // modulo mengambil sisa dari hasil pembagian. cth: 8 mod 3 = 2

    // cout << "Hasil Perjumlahan = " << tambah << endl;
    // cout << "Hasil Pengurangan = " << kurang << endl;
    // cout << "Hasil Perkalian = " << kali << endl;
    // cout << "Hasil Pembagian = " << bagi << endl;
    // cout << "Hasil Sisa Bagi = " << modulo << endl;

    // // Relational Operator
    // cout << (a==b) << endl; // A sama dengan B
    // cout << (a<b) << endl; // A lebih kecil dari B
    // cout << (a<=b) << endl; // A lebih kecil atau sama dengan B
    // cout << (a>b) << endl; // A lebih besar dari B
    // cout << (a>=b) << endl; // A lebih besar atau sama dengan B
    // cout << (a!=b) << endl; // A tidak sama dengan B

    // //Logical Operator (&&,||,!)

    // Logical Operator AND akan bersifat True jika kedua pernyataan benar / true
    // cout << (true && true) << endl; // output True
    // cout << (true && false) << endl; // output false
    // cout << (false && true) << endl; // output false
    // cout << (false && false) << endl; // output false

    // Logical Operator OR akan bersifat True jika satu dari kedua pernyataan benar / True
    // cout << (true || true) << endl; // output True
    // cout << (true || false) << endl; // output True
    // cout << (false || true) << endl; // output True
    // cout << (false || false) << endl; // output False

    // Logical Operator NOT digunakan untuk mengambil kebalikan atau yang TIDAK dari pernyataan.
    // cout << !true << endl; // output False
    // cout << !false << endl; // output True

    // // Bitwise Operator (&, |, ^, ~, >>, <<) --> biner

    // "&" Bitwise Operator AND
    // cout << (5&7) << endl;

    // "|" Bitwise Operator OR
    // cout << (5|7) << endl;

    // "^" Bitwise Operator XOR
    // cout << (5^7) << endl;

    // "~" bitwise operator NOT meng-invert biner 7 dan mengubahnya menggunankan two-complement yang nanti akan menghasil hasil -8
    // cout << (~7) << endl;
    
     // ">>" atau Shift Right akan men-shift bit ke kanan sebanyak yang diminta
    // cout << (7 >> 2) << endl; // 7 digeser bitnya ke kanan sebanyak 2 kali yang menghasilkan angka 1

    // "<<" atau Shift Left akan men-shift bit ke kiri sebanyak yang diminta
    // cout << (7 << 2) << endl; // 7 digeser bitnya ke kiri sebanyak 2 kali yang menghasilkan angka 28

    // // Shorthand, digunakan untuk melakukan operasi bilangan menggunakan operator aritmatika tanpa perlu memanggil variabel itu sendiri ke dalam operasi.
    // a += 7; //a = a + 7;
    // cout << a << endl;

    // a -= 7; //a = a - 7;
    // cout << a << endl;

    // a *= 7; //a = a * 7;
    // cout << a << endl;
    
    // a /= 7; //a = a / 7;
    // cout << a << endl;

    // // Increment, Decrement
    // //Pre increment
    // cout << a << endl;
    // cout << ++a << endl; // menambahkan +1 kepada variabel sebelum variabel di keluarkan.

    // cout << b << endl;
    // cout << ++b << endl;

    // //Post Increment
    // cout << a << endl;
    // cout << a++ << endl; // menambahkan +1 kepada variabel setelah variabel di keluarkan.

    // cout << b << endl;
    // cout << b++ << endl;

    // //Pre Decrement
    // cout << a << endl;
    // cout << --a << endl; // mengurangkan -1 kepada varibel sebelum variabel dikeluarkan.

    // cout << b << endl;
    // cout << --b << endl;

    // //Post Decrement
    // cout << a << endl;
    // cout << a-- << endl; // mengurangkan -1 kepada variabel setelah variabel dikeluarkan.

    // cout << b << endl;
    // cout << b-- << endl;

}
