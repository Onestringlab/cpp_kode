#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    string namafile;

    ifstream fileku;

    cout << "Nama File : ";
    cin >> namafile;

    fileku.open(namafile);

    if(fileku.fail())
    {
        cout << "File gagal dibuka." << endl;
        return 1;
    }

    string baris;
    int total = 0;

    while(!fileku.eof())
    {
        getline(fileku, baris);
        cout << baris << endl;
        total++;
    }
    fileku.close();

    cout <<"Total baris : " << total << endl;

    return 0;
}
