#include <iostream>
using namespace std;


int main()
{
    int i,j,bar,kol;

    cout << "Jumlah Baris : ";
    cin >> bar;

    cout << "Jumlah Kolom : ";
    cin >> kol;

    int matriks[bar][kol];

    cout << "Input Matriks" << endl;
    for(i=0;i<bar;i++)
    {
        for(j=0;j<kol;j++)
        {
            cout << "[" << i+1 << "][" << j+1 << "] = ";
            cin >> matriks[i][j];
        }
    }

    cout << "Data Matriks" << endl;
    for(i=0;i<bar;i++)
    {
        for(j=0;j<kol;j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Hasil Transpose Matriks" << endl;
    for(i=0;i<kol;i++)
    {
        for(j=0;j<bar;j++)
        {
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }


    return 0;

}
