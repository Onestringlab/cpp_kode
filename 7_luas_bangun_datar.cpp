#include <iostream>
using namespace std;

int main()
{
    //Menghitung Luas Segitiga

    float alas_segitiga = 0.0;
    float tinggi_segitiga = 0.0;
    float luas_segitiga = 0.0;

    cout << "Panjang alas segi tiga : ";
    cin >> alas_segitiga;
    cout << "Tinggi segi tiga : ";
    cin >> tinggi_segitiga;

    luas_segitiga = (alas_segitiga * tinggi_segitiga) / 2;
    cout << "Luat segi tiga : " << luas_segitiga;

    //Menghitung luas persegi panjang
    float panjang = 0.0;
    float lebar = 0.0;
    float luas_persegi_panjang = 0.0;

    cout << "\n\nPanjang persegi panjang : ";
    cin >> panjang;
    cout << "Tinggi persegi panjang : ";
    cin >> lebar;

    luas_persegi_panjang = panjang * lebar;
    cout << "Luas persegi panjang : " << luas_persegi_panjang;

    //Menghitung luas trapesium
    float alas_1 = 0.0;
    float alas_2 = 0.0;
    float tinggi = 0.0;
    float luas_trapesium = 0.0;

    cout << "\n\n Alas 1 trapesium : ";
    cin >> alas_1;
    cout << "Alas 2 trapesium : ";
    cin >> alas_2;
     cout << "Tinggi trapesium : ";
    cin >> tinggi;

    luas_trapesium = (alas_1 + alas_2) * (tinggi/2);
    cout << "Luas trapesium : " << luas_trapesium;

    //Menghitung luas lingkaran
    float r = 0.0;
    float luas_lingkaran = 0.0;

    cout << "\n\n Jari-jari lingkaran : ";
    cin >> r;

    luas_lingkaran = 3.14 * r * r;
    cout << "Luas lingkaran : " << luas_lingkaran;

}
