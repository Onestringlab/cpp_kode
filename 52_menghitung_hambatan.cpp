#include <iostream>
using namespace std;

double tahlis(double nitahlis[], int jumtahlis, char sp)
{
    int i;
    double total = 0;
    if(toupper(sp) == 'P')
    {
        for(i=0; i<jumtahlis; i++)
        {
            total = total + (1/nitahlis[i]);
        }
        total = 1/total;
    }
    else if (toupper(sp) == 'S')
    {
        for(i=0; i<jumtahlis; i++)
        {
            total = total + nitahlis[i];
        }
    }
    return total;
}

int main()
{
    // seri R = R1 + R2 + R3;
    // paralel 1/R = 1/R1 + 1/R2 + 1/R3

    int i, jumtahlis;
    char sp;
    double total;

    cout << "Jumlah tahanan listrik : ";
    cin >> jumtahlis;

    double nitahlis[jumtahlis];

    for(i=0; i<jumtahlis; i++)
    {
        cout << "R" << i+1 << ": ";
        cin >> nitahlis[i];
    }

    cout << "Disusun secara (P)aralel atau (S)eri : ";
    cin >> sp;

    total = tahlis(nitahlis, jumtahlis, sp);

    cout << "Nilai tahanan total : " << total << " ohm " <<endl;


    return 0;
}
