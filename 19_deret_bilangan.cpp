#include <iostream>
using namespace std;

int main()
{
    int i;
    int awal;
    int akhir;

    cout<<"Awal: ";
    cin >> awal;

    cout<<"Akhir: ";
    cin >> akhir;

    //menampilkan deret bilangan awal-akhir
    for(i=awal; i<=akhir; i++)
    {
        cout<< i <<" ";
    }
    cout << "\n";

    //menampilkan deret bilangan ganjil awal-akhir
    for(i=awal; i<akhir; i=i+2)
    {
        cout<< i <<" ";
    }
    cout << "\n";

    for(i=awal; i<=akhir; i++)
    {
        if(i % 2 == 1)
        {
            cout<< i <<" ";
        }
    }
    cout << "\n";

    //menampilkan deret bilangan genap awal-akhir
    for(i=awal; i<=akhir; i=i+2)
    {
        cout<< i <<" ";
    }
    cout << "\n";

    for(i=awal; i<=akhir; i++)
    {
        if(i % 2 == 0)
        {
            cout<< i <<" ";
        }

    }
    cout << "\n";
    return 0;
}
