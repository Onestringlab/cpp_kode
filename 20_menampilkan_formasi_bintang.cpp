#include <iostream>
using namespace std;

int main()
{
    int num;
    int i,j;

    cout << "Jumlah Formasi Bintang: ";
    cin >> num;

    for(i=0; i<num; i++)
    {
        for(j=0;j<num; j++)
        {
            if(i>=j)
            {
                cout << "* ";
            }
            else
            {
                cout <<"  ";
            }

        }
        cout <<"\n";
    }

    cout <<"\n";
    for(i=0; i<num; i++)
    {
        for(j=0;j<num; j++)
        {
            if(i<=j)
            {
                cout <<"* ";
            }
            else
            {
                cout << "  ";
            }

        }
        cout <<"\n";
    }

    cout <<"\n";
    for(i=0; i<num; i++)
    {
        for(j=0;j<num; j++)
        {
            if(i+j<num)
            {
               cout << "* ";
            }
            else
            {
                cout <<"  ";
            }


        }
        cout <<"\n";
    }

     cout << "\n";
    for(i=0; i<num; i++)
    {
        for(j=0;j<num; j++)
        {
            if(i+j>=num-1)
            {
                cout << "* ";
            }
            else
            {
                cout <<"  ";
            }

        }
        cout <<"\n";
    }
}
