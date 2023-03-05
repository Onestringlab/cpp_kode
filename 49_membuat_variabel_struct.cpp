#include <iostream>
using namespace std;

//membuat type data struct siswa
struct siswa
{
    string nis;
    string nama;
    int tb;
    int bb;
};


int main()
{
    int a;
    struct siswa kelasA; // deklarasi variabel struct siswa

    a = 19;
    kelasA.nis = "2225001";
    kelasA.nama = "Anton Baskoro";
    kelasA.tb = 158;
    kelasA.bb = 52;

    cout << kelasA.nis << endl;
    cout << kelasA.nama << endl;
    cout << kelasA.tb << endl;
    cout << kelasA.bb << endl;

    return 0;
}
