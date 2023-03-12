#include <iostream>
using namespace std;


int main()
{
    int bar, kol;
    int i,j,k;

    cout << "Jumlah Baris: ";
    cin >> bar;
    cout << "Jumlah Kolom: ";
    cin >> kol;

    int matriks_1[bar][kol];
    int matriks_2[bar][kol];

    for(i=0; i<2; i++)
    {
        cout << "Matriks ke-" << i+1 << endl;
        for(j=0; j<bar; j++)
        {
            for(k=0; k<kol; k++)
            {
                cout << "[" << j+1 << "][" << k+1 <<"]= ";
                if(i==0) cin >> matriks_1[j][k];
                else if(i==1) cin >> matriks_2[j][k];
            }
        }
    }
    cout << "Data Matriks" << endl;
    for(i=0; i<2; i++)
    {
        cout << "Matriks ke-" << i+1 << endl;
        for(j=0; j<bar; j++)
        {
            for(k=0; k<kol; k++)
            {
                if(i==0) cout << matriks_1[j][k] << " ";
                else if(i==1) cout << matriks_2[j][k] << " ";
            }
            cout << endl;
        }
    }

    cout << "Penjumlahan Matriks" << endl;
    for(j=0; j<bar; j++)
    {
        for(k=0; k<kol; k++)
        {
             cout << matriks_1[j][k] + matriks_2[j][k]<< " ";
        }
        cout << endl;
    }

    cout << "Pengurangan Matriks" << endl;
    for(j=0; j<bar; j++)
    {
        for(k=0; k<kol; k++)
        {
             cout << matriks_1[j][k] - matriks_2[j][k]<< " ";
        }
        cout << endl;
    }
}
