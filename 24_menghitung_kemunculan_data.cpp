#include <iostream>
using namespace std;

int muncul(int myarray[], int n, int p)
{
    int i,j;
    j = 0;
    for(i = 0; i < p ; i++)
    {
        cout << myarray[i] << " ";
        if(n==myarray[i])
        {
            // cout << "Ditemukan bilangan " << n << endl;
            j++;
        }
    }
    cout << endl;
    return j;
}

int main()
{
    int myarray[] = {9,8,7,6,5,6,8,6,8};
    int n,m,p;

    p = sizeof(myarray)/sizeof(myarray[0]);

    cout <<"Cari bilangan: ";
    cin >> n;

    m = muncul(myarray, n, p);

    cout <<"Kemunculan bilangan " << n
            << " sebanyak "<< m << " kali";

    return 0;
}
