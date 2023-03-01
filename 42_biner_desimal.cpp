#include <iostream>
#include <cstring>
using namespace std;

int bindes (string biner)
{
    int i,desimal, kali, p;

    p = biner.length();
    desimal = 0;
    kali = 1;

    for(i=p-1; i >=0; i--)
    {
        if(biner[i] == '1')
        {
            desimal = desimal + kali;
        }
        kali = 2 * kali;
    }
    return desimal;
}

int main()
{
    // 1011 = 1 * 2^0 + 1 * 2^1 + 0 * 2^2 + 1 * 2^3

    string biner;

    biner = "1";
    cout << bindes(biner) << endl;

    biner = "10";
    cout << bindes(biner) << endl;

    biner = "11";
    cout << bindes(biner) << endl;

    biner = "100";
    cout << bindes(biner) << endl;

    biner = "101";
    cout << bindes(biner) << endl;

    biner = "10110";
    cout << bindes(biner) << endl;
}
