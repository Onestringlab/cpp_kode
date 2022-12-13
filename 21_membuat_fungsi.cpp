#include <iostream>
using namespace std;

void cetak();
void cetak_par(string s);
void hitung(int x, int y);
int hitung_bal(int x, int y);

int main()
{
    string sapa = "Kamu sudah makan?";
    int hasil;

    cetak();
    cetak_par("Apa kabar?");
    cetak_par(sapa);

    hitung(89, 78);

    hasil = hitung_bal(101, 79);
    cout<< hasil << "\n";
    return 0;
}

//1.tanpa nilai balikan tanpa parameter
void cetak()
{
    cout<<"Hello, Fungsi\n";
}

//2.tanpa nilai balikan dengan 1 parameter
void cetak_par(string s)
{
    cout<< s <<"\n";
}

//3.tanpa nilai balikan dengan 2 parameter
void hitung(int x, int y)
{
    cout<< x + y <<"\n";
}

//4.tanpa nilai balikan dengan 2 parameter
int hitung_bal(int x, int y)
{
    int z = x + y;
    return z;
}
