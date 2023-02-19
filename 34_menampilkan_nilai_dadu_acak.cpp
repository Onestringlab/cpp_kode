#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void acak_dadu (int dadu)
{
    int i,a;
    srand(time(0));
    for(i=0;i<dadu;i++)
    {
        a = (rand()%6)+1;
        cout << "Dadu ke-"<< i+1<< ": "<< a << endl;
    }
}

int main()
{
    int n;
    cout <<"Berapa dadu? "; cin >> n;
    acak_dadu(n);


}
