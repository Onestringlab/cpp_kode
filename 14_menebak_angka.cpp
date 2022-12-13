#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


int main()
{
    int angka;
    int tebakan;
    int tertinggi = 100;
    int terendah = 1;

    cout << "Masukkan Angka Pesulap Merah (1-100) : ";
    cin >> angka;

    srand(time(0));
    tebakan = rand() % tertinggi + 1;

    while (angka != tebakan)
    {
        if(angka > tebakan)
        {
            terendah = tebakan;
            cout<< tebakan << " Tebakan Teralu Rendah \n";

        }
        else if(angka < tebakan)
        {
            tertinggi = tebakan;
            cout<< tebakan << " Tebakan Teralu Besar \n";
        }

        tebakan = ((tertinggi - terendah)/2) + terendah;
    }

    cout << tebakan <<" Tebakan Benar \n";
    return 0;
}
