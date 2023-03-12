#include <iostream>
using namespace std;

struct siswa
{
    string nis;
    string nama;
    int tb;
    int bb;
};


int main()
{
    int data;

    cout << "Jumlah Data: ";
    cin >> data;
    cin.get();

    struct siswa kelasA[data];
    int i;

    for(i=0; i<data; i++)
    {
        cout << "Data ke-" << i+1 << endl;
        cout << "NIS \t: ";
        getline(cin,kelasA[i].nis);
        cout << "Nama \t: ";
        getline(cin,kelasA[i].nama);
        cout << "Tinggi Badan \t: ";
        cin >> kelasA[i].tb;
        cout << "Berat Badan \t: ";
        cin >> kelasA[i].bb;
        cin.get();
    }
    cout << "================================" << endl;
    for(i=0; i<data; i++)
    {
        cout << "Data ke-" << i+1 << endl;
        cout << "NIS \t: " << kelasA[i].nis << endl;
        cout << "Nama \t: " << kelasA[i].nama << endl;
        cout << "Tinggi Badan \t: " << kelasA[i].tb << endl;
        cout << "Berat Badan \t: " << kelasA[i].bb << endl;
    }



}

