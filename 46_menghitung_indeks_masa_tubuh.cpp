#include <iostream>
using namespace std;

double hitbmi(double berat, double tinggi)
{
    return berat / (tinggi * tinggi);
}

void katbmi(double bmi)
{
    cout << "Kategori BMI: ";
    if(bmi < 16)
        cout << "Kurus Sekali" << endl;
    else if(bmi > 16 && bmi < 17)
        cout << "Kurus Sedang" << endl;
    else if(bmi > 17 && bmi < 18.5)
        cout << "Kurus Ringan" << endl;
    else if(bmi > 18.5 && bmi < 25)
        cout << "Normal" << endl;
    else if(bmi > 25 && bmi < 30)
        cout << "Gemuk" << endl;
    else if(bmi > 30 && bmi < 35)
        cout << "Gendut Level 1" << endl;
    else if(bmi > 35 && bmi < 40)
        cout << "Gendut Level 2" << endl;
    else if(bmi > 40)
        cout << "Gendut Level 3" << endl;
}

int main()
{
    // bmi = berat / (tinggi^2)
    double berat, tinggi, bmi;

    cout << "Berat Badan (kg):";
    cin >> berat;

    cout << "Tinggi Badan (cm):";
    cin >> tinggi;
    tinggi = tinggi / 100;

    bmi = hitbmi(berat,tinggi);
    cout << "BMI Anda: " << bmi << endl;
    katbmi(bmi);
}
