#include <iostream>
using namespace std;

int main()
{
    const float phi = 3.14;
    float jarijari, Volume, Luas, jari;

    cout << "Masukkan Jari-Jari Bola : ";
    cin >> jarijari;

    jari = jarijari * jarijari;
    Volume = (float)4/3 * phi * jari * jarijari;
    Luas = 4 * phi * jari;

    cout << "Volume Bola = " << Volume << endl;
    cout << "Luas Permukaan Bola = " << Luas << endl;

}