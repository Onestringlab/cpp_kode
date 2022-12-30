#include <iostream>
using namespace std;

void balik_urutan(int myarray[], int panjang)
{
    int i,temp;

    for(i=0; i<panjang/2; i++)
    {
        temp = myarray[i];
        myarray[i] = myarray[panjang - i - 1];
        myarray[panjang - i - 1] = temp;
    }
}

int main()
{
    int myarray[] = {9,8,7,6,5,4,3,2,1,0};
    int panjang = sizeof(myarray)/sizeof(myarray[0]);
    int i;

    balik_urutan(myarray,panjang);

    for(i=0; i<panjang; i++)
    {
        cout << myarray[i] <<" ";
    }
}
