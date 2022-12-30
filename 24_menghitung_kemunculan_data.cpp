#include <iostream>
using namespace std;

int muncul(int myarray[], int cari, int panjang)
{
    int i,k;
    k = 0;
    for(i=0; i<panjang; i++)
    {
        if(myarray[i] == cari)
        {
            k++;
        }
    }
    return k;
}

int main()
{
    int myarray[] = {9,8,7,6,5,6,8,6,8,6};
    int c,k;
    int panjang = sizeof(myarray)/sizeof(myarray[0]);

    cout <<"Cari Angka: ";
    cin >> c;

    k = muncul(myarray, c, panjang);

    cout <<"Angka "<< c <<" muncul "<< k << " kali";
}
