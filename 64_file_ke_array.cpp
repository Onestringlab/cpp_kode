#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    string teks[100];
    string nama_file;

    ifstream file;

    cout << "Nama File : ";
    cin >> nama_file;

    file.open(nama_file);

    if(file.fail())
    {
        cout << "File tidak dapat dibuka" << endl;
        return 1;
    }

    int baris = 0;
    while(!file.eof())
    {
        getline(file, teks[baris]);
        baris++;
    }

    file.close();

    int i;
    for(i=0;i<baris;i++)
    {
        cout << teks[i] << endl;
    }

    return 0;
}
