#include <iostream>
using namespace std;

void penjumlahan(int a, int b) // fungsi penjumlahan
{
    cout << a + b << endl;
}

void penjumlahanPointer (int *a, int *b) // fungsi penjumlahan dengan pointer
{
    *a += *b;
    cout << *a << endl;
}

void doubleValue(int *a)
{
    *a *= 2;
    cout << *a << endl;
}

int main()
{
    system("CLS");

    // Pointer Declaration
    // int number = 35;
    // int *pointer_number = &number;

    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // // Pointer Operation
    // *pointer_number = 25;
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // Pointer in Array
    // int num[] = {1,2,3,4,5};
    // int *pointer_num = num; // pointer menunjuk array num
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[0] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;

    // *pointer_num += 5;
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat dari memori variabel num = " << &num[0] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;

    // // Pointer in Parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan (num1,num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer (&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    // // Pointer in Pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;
    // cout << "Isi variabel score = " << score << " dan alamat memorinya = " << &score << endl;
    // cout << " Isi variabe pointer_score = " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score = " << *pointer_score << " dan alamat memori pointer_score = " << &pointer_score << endl;
    // cout << " Isi variabe ptr_pointer_score = " << pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score = " << *ptr_pointer_score << " dan alamat memori pointer_score = " << &ptr_pointer_score << endl;

    // Dinamic Pointer
    // int *ptr = new int;
    // *ptr = 30;
    // cout << "Isi variabel ptr = " << *ptr << " dan alamat ptr = " << &ptr << endl;

    // delete ptr;
    // cout << "Isi variabel ptr = " << *ptr << " dan alamat ptr = " << &ptr << endl;

    // Contoh 
    int n;
    cout << "Masukkan sebuah angka: "; cin>>n;

    doubleValue(&n);
    cout<<"Nilai angka setelah dikali 2: "<<n<<endl;
}
