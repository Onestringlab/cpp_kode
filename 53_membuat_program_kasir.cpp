#include <iostream>
using namespace std;

struct barang
{
    string nama;
    int harga;
};

int main()
{
    struct barang brg[5];
    int i;

    brg[0].nama = "Beras";
    brg[0].harga = 15000;

    brg[1].nama = "Gula Pasir";
    brg[1].harga = 13000;

    brg[2].nama = "Minyak";
    brg[2].harga = 14000;

    brg[3].nama = "Kopi XYZ";
    brg[3].harga = 12000;

    brg[4].nama = "Tepung";
    brg[4].harga = 11000;

    cout << "====================================" << endl;
    for(i=0; i<5; i++)
    {
        cout << i+1 << ". " <<brg[i].nama << "\t Rp."
        << brg[i].harga << endl;
    }
    cout << "====================================" << endl;
    cout << "0. Keluar" << endl;
    cout << "====================================" << endl;
    int total = 0;
    int jumlah = 0;
    int pil;

    do
    {
        cout << "Masukkan Nomor Barang : ";
        cin >> pil;
        if(pil!=0)
        {
            cout << "Jumlah Pembelian "
            << brg[pil-1].nama << " : ";
            cin >> jumlah;
            cout << "Harga Total : "
            << brg[pil-1].harga * jumlah << endl;
            total = total + brg[pil-1].harga * jumlah;
        }

    }while (pil!=0);

    int bayar;

    cout << "Total Belanja : Rp." << total << endl;
    cout << "Pembayaran : Rp. ";
    cin >> bayar;
    cout << "Kembalian : Rp. " << bayar - total << endl;

    return 0;
}
