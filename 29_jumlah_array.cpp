#include <iostream>
using namespace std;

int jum_arr(int data[], int p)
{
    int i,jum;

    jum=0;
    for(i = 0; i < p; i++)
    {
        jum = jum + data[i];
    }
    return jum;
}

int main()
{
    int data[] = {8,5,4,3,6,7,2};
    int total,p;

    p= sizeof(data)/sizeof(data[0]);

    total = jum_arr(data,p);

    cout << "Total Jumlah Bilangan:" << total << endl;
}
