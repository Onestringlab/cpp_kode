#include <iostream>
using namespace std;

int main()
{

    //deklarasi variabel
    string nama = "";
    string nis = "";
    float nilai_tugas;
    float nilai_uts;
    float nilai_uas;
    float nilai_akhir;
    char nilai_abjad;


    //masukkan data
    cout << "Memasukan Data\n";
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan NIS : ";
    cin >> nis;
    cout << "Masukkan Nilai Tugas : ";
    cin >> nilai_tugas;
    cout << "Masukkan Nilai UTS : ";
    cin >> nilai_uts;
    cout << "Masukkan Nilai UAS : ";
    cin >> nilai_uas;

    //perhitungan
    nilai_akhir = (nilai_tugas * 0.2) + (nilai_uts * 0.3) +(nilai_uas * 0.5);

    if(nilai_akhir >= 80)
    {
        nilai_abjad = 'A';
    }
    else if(nilai_akhir >= 70)
    {
        nilai_abjad = 'B';
    }
    else if(nilai_akhir >= 60)
    {
        nilai_abjad = 'C';
    }
    else if(nilai_akhir >= 50)
    {
        nilai_abjad = 'D';
    }
    else
    {
        nilai_abjad = 'E';
    }

    //tampilkan data
    cout << "\nTampilkan Data\n";
    cout << "Nama : " << nama << "\n";
    cout << "NIS : " << nis << "\n";
    cout << "Nilai Tugas : " << nilai_tugas << "\n";
    cout << "Nilai UTS : " << nilai_uts << "\n";
    cout << "Nilai UAS : " << nilai_uas << "\n";
    cout << "Nilai Akhir : " << nilai_akhir << "\n";
    cout << "Nilai Abjad : " << nilai_abjad << "\n";



}
