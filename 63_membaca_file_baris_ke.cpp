#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;

    string nama_file;
    int baris;

    cout << "Nama File : ";
    cin >> nama_file;
    cout << "Baris ke : ";
    cin >> baris;

    if(baris <= 0)
    {
        cout << "Nomor baris harus >= 1" << endl;
        return 1;
    }

    file.open(nama_file);
    if(file.fail())
    {
        cout << "File tidak dapat dibuka" << endl;
        return 1;
    }

    int i = 0;
    string teks;
    while(!file.eof())
    {
        i++;
        getline(file,teks);
        if(i==baris) break;
    }

    if(i < baris)
    {
        cout << "Baris tidak ditemukan" << endl;
        cout << "File terdiri dari " << i;
        cout << " total baris" << endl;
    }
    else
    cout << teks << endl;




    return 0;
}
