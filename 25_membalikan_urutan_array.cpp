#include <iostream>
using namespace std;

void balik(int myarray[], int p)
{
    int i,temp;
    for(i = 0; i<p/2; i++)
    {
        temp = myarray[i];
        myarray[i]= myarray[p-i-1];
        myarray[p-i-1] = temp;
    }
}

int main()
{
    int myarray[] = {0,1,2,3,4,5,6,7,8,9};
    int i,p;

    p = sizeof(myarray)/sizeof(myarray[0]);

    for(i = 0; i<p; i++)
    {
        cout << myarray[i] << " ";
    }
    cout << endl;

    balik(myarray,p);

    for(i = 0; i<p; i++)
    {
        cout << myarray[i] << " ";
    }

    return 0;
}
