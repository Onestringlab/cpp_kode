#include <iostream>
using namespace std;

int main()
{
    int i;
    int nomor[3] = {10, 20, 30};

    cout << nomor[0] <<"\n";
    cout << nomor[1] <<"\n";
    cout << nomor[2] <<"\n";

    //menampilkan data array
    for(i=0; i<3; i++)
    {
        cout << nomor[i] <<" ";
    }

    cout <<"\n";
    //mengubah data array
    nomor[1] = 50;
    cout << nomor[1] <<"\n";

    //menampilkan data array
    for(i=0; i<3; i++)
    {
        cout << nomor[i] <<" ";
    }
    cout <<"\n";


    return 0;
}
