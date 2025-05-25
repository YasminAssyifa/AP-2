#include <iostream>
using namespace std;

class ContohAkses
{
    private:
        int privateVar;

    protected:
        int protectedVar;

    public: 
        int publicVar;

        //constructor
        ContohAkses()
        {
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }

    void tampilkanSemua()
    {
        cout << "Akses dari dalam class: " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

//kelas turunan
// variabel protectedVar dapat diakses hanya dengan menggunakan class turunan dari class akses.
class Turunan : public ContohAkses
{
    public:
    void aksesProtected()
    {
        cout << "Akses publicVar: " << publicVar << endl;
        cout << "Akses protectedVar: " << protectedVar << endl;
    }
};

int main()
{
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "Akses dari luar class : " << endl;
    cout << obj.publicVar << endl; // variabel class public dapat diakses kapan saja tanpa ketentuan
    // cout << obj.privateVar << endl; // error // variabel class private hanya dapat dipakai pada class itu sendiri
    // cout << obj.protectedVar << endl; // error // variabel class protected dapat diakses melalui class turunan dari class awal

    Turunan tur;
    tur.aksesProtected(); // turunan class
}
