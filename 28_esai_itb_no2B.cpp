#include <iostream>
using namespace std;

void jumlahterdekat(int data[],int x, int pjg)
{
    int i,j,jum,besar=0;

    for(i=0; i<pjg;i++)
    {
        for(j=i+1;j<pjg; j++)
        {
            jum = data[i]+data[j];
            if(besar<jum && jum<x)
            {
                besar = jum;
            }
        }
    }
    if(pjg == 1 || besar==0)
    {
        cout << "Tidak dapat diproses" << endl;
    }
    else
    {
        for(i=0;i<pjg;i++)
        {
            for(j=i+1;j<pjg;j++)
            {
                jum = data[i] +data[j];
                if(besar == jum)
                {
                    cout << data[i] << " " <<data[j]
                         << endl;
                }
            }
        }
    }
}

int main()
{
    int data1[] = {10,20,5,4,2,1};
    int data2[] = {1,3,5,7,9,0,2};
    int pjg;

    pjg = sizeof(data1)/sizeof(data1[0]);
    jumlahterdekat(data1,10,pjg);

    pjg = sizeof(data2)/sizeof(data2[0]);
    jumlahterdekat(data2,9,pjg);
}
