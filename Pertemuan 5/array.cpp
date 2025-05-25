#include <iostream>
#include <string> // header untuk string
#include <array> // header untuk array
using namespace std;

int main()
{
    system("CLS");
    // Array Declaration & Initialization
    /* 2 Cara Membuat Array */

    // Cara 1 : Array Kosong
    // string nama[5]; // array yang berisi 5, dimulai dengan index 0
    // nama[0]="Alya"; // array untuk index 0
    // nama[1]="Parul";
    // nama[2]="Syukron";
    // nama[3]="Aurick";
    // nama[4]="Dzakwan";

    // Cara 2 : Array yang langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};
    // string nama[0] = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // Ascending Element in Array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    //Menggunakan Looping

    //Ascending array in looping
    // mengeluarkan array dari index 0 sampai 4
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<nama[i]<<endl;
    // }

    //Descending array in looping
    // menggeluarkan array dari index 4 sampai 0
    // for (int i = 4; i >= 0; i--)
    // {
    //     cout<<nama[i]<<endl;
    // }

    // Multidimensional Array
    // 1 3 5
    // 2 4 6

    // matriks 2 x 3
    // int matrix[2][3] = {{1, 3, 5},{2, 4 ,6}};
    // for( int i = 0; i < 2; i++)
    // {
    //     for ( int j = 0; j < 3; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // matrix 4 x 6
    // int matrix[4][6] = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}, {19, 20, 21, 22, 23, 24}};
    // for( int i = 0; i < 4; i++)
    // {
    //     for ( int j = 0; j < 6; j++)
    //     {
    //         cout << matrix[i][j] << "\t"; // \t untuk membuat rapi / bertabel
    //     }
    //     cout << endl;
    // }

    // String Array for characters
    // string nama = "Kiel";
    // // cout << nama[0] << endl; //mengeluarkan karakter index 0 dari "kiel" yaitu "k"
    // // cout << nama[2] << endl;

    // for (int i = 0; i < nama.length(); i++)
    // {
    //     cout << nama[i] << endl;
    // }

    string s1 = "Hello";
    string s2 = "World";

    /* 1. s1 = s2*/
    // s1 = s2;
    // cout << "s1 =" << s1 << endl; // s1 = s2 = "world"

    /* 2. s1 + s2 */
    // cout << "Hasil : " << s1+s2; << endl; // "HelloWorld"

    /* 3. s1.length() */
    // cout << s1.length() << endl;
    // cout << (s1+s2).length() << endl; // length "hello" 5 + length "world" 5 = 10

    /* 4. s1.substr(n, m) */
    // cout << s1.substr(2, 4) << endl; // mengambil karakter dari index 2 sampai banyaknya 4. "llo"
    // cout << (s1+s2).substr(5, 3) << endl; // mengambil dari index 5 sampai banyak 3 "Wor"

    // Operator sizeof, untuk mengetahui ukuran bit dari suatu tipe data
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // string s = "Yasmin";
    // cout << sizeof(s);
    
    // Array library
    // array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout << "Nilai : ";

    // melakukan pengulangan untuk i = 0, dengan syarat i lebih kecil dari ukuran/size nilai. mengeluarkan nilai index i
    // for(int i = 0; i < nilai.size(); i++)
    // {
    //     cout << nilai[i] << " ";
    // }

    // mengeluarkan seluruh anggota array nilai
    // for (float n : nilai)
    // {
    //     cout << n << " ";
    // }
}
