#include <iostream>
using namespace std;

int unik(int data[], int p)
{
    int i,j,jum;

    jum = 0;
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            if(data[i]==data[j] && i!=j)
            {
                break;
            }
        }
        if (j == p)
            jum++;
    }
    return jum;
}

int main()
{
    int data[] = {1,2,3,5,3,9};
    int p = sizeof(data)/sizeof(data[0]);

    cout << unik(data, p) << endl;
}
