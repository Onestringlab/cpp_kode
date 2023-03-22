#include <iostream>
#include <fstream>
#include <sstream>
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
        cout << "File tidak ditemukan";
        return 1;
    }

    stringstream buffer;

    buffer << fileku.rdbuf();

    string isifile;

    isifile = buffer.str();

    cout << isifile;

    fileku.close();

    return 0;
}
