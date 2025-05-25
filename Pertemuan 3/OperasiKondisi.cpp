#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("CLS");
    back:
    cout << "Masukkan nilai : ";
    cin >> nilai;

    // //if statement
    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus!" << endl;  // program/line akan berjalan jika nilai lebih besar sama dengan 65

    // // if - else statement
    // //if statement
    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus!" << endl;
    // }
    // else { cout << "Anda Lulus!" << endl;}  // jika statement nilai <= 65 tidak terpenuhi, maka akan lompat ke else dan menjalankan line lain.

    // // if - else - if statement
    // if (nilai == 100)
    // {
    //     cout << "Anda keceh!" << endl;
    // }
    // else if ( nilai <= 65)
    // { 
    //     cout << "Anda tidak Lulus!" << endl;
    // }
    // else { cout << "Anda Lulus!" << endl;}

    // if else digunakan jika ada beberapa statement atau requirement dari sebuah program.

    // //nested if atau else didalam if.
    // if (nilai <= 65)
    // {
    //     cout << "Anda tidak lulus" << endl;
    // } else {
    //     if (nilai == 100) {
    //         cout << "Anda lulus dan Anda hebat" << endl;
    //     } else {
    //         cout << "Anda Lulus" << endl;
    //     }
    // }

    // switch case
    // switch (nilai)
    // {
    //     case 1: cout << "Senin" << endl; break; //case, jika var "nilai" diinput dengan 1, maka akan menjalankan line ini.
    //     case 2: cout << "Selasa" << endl; break;
    //     case 3: cout << "Rabu" << endl; break;
    //     case 4: cout << "Kamis" << endl; break;
    //     case 5: cout << "Jumat" << endl; break;
    //     case 6: cout << "Sabutu" << endl; break;
    //     case 7: cout << "Minggu" << endl; break;
    //     default : cout << " Inputan tidak valid" << endl; break; goto back; // untuk goto itu sendiri, digunakan untuk melompat ke bagian dari suatu program.
    // }

    // case menggunakan "..." sebagai rentan nilai (range)
    switch (nilai)
    {
    case 85 ... 100:
        cout << "A" << endl;
        break;
    case 80 ... 84:
        cout << "B+" << endl;
        break;
    case 75 ... 79:
        cout << "B" << endl;
        break;
    case 70 ... 74:
        cout << "C+" << endl;
        break;
    case 65 ... 69:
        cout << "C" << endl;
        break;
    case 60 ... 64:
        cout << "D" << endl;
        break;
    default:
        cout << "E" << endl;
        break;
    }

    //Pada operasi kondisi switch, default berguna sebagai pilihan lain (else) jika semua requirement tidak terpenuhi.

    // a > 5 ? 9 : 6
    // apakah nilai a lebih besar dari 5? kalau iya, maka akan keluar outputan 9 dan jika tidak maka akan keluar 6.
    string checkNum = (nilai % 2 == 0)? "Genap" : "Ganjil";
    cout << nilai << "Tuh bilangan" << checkNum << "sih" << endl;

}
