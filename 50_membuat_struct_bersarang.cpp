#include <iostream>
using namespace std;

struct fisik
{
    int tb;
    int bb;
    string goldar;
};

struct siswa
{
    string nis;
    string nama;
    struct fisik fis;
};

int main()
{
    struct siswa kelasA;

    kelasA.nis = "2225001";
    kelasA.nama = "Budiman Mardianto";
    kelasA.fis.tb = 160;
    kelasA.fis.bb = 57;
    kelasA.fis.goldar = "AB";

    cout << kelasA.nis << endl;
    cout << kelasA.nama << endl;
    cout << kelasA.fis.tb << endl;
    cout << kelasA.fis.bb << endl;
    cout << kelasA.fis.goldar << endl;


    return 0;
}
