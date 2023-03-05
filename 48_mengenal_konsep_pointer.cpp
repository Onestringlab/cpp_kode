#include <iostream>
using namespace std;

int main()
{
    int a;
    int *b; //variabel yang berisi alamat memory

    a = 10;
    cout << a << " " << &a << endl;

    b = &a; //tanda & untuk mendapatkan alamat memory
    cout << *b << " " << b << " "<< &b << endl;

    a = 15;
    cout << a << " " << &a << endl;
    cout << *b << " " << b << " "<< &b << endl;

    *b = 25;  //tanda * untuk mendapatkan isi dari alamat memory
    cout << a << " " << &a << endl;
    cout << *b << " " << b << " "<< &b << endl;
}
