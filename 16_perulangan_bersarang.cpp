#include <iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=0; i<2; i++)
    {
        cout<< "i = " << i <<"\n";
        for(j=0; j<3; j++)
        {
            cout<<" j= " << j <<"\n";
            for(k=0; k<4; k++)
            {
                cout<<"  k= " << k;
            }
            cout << "\n";
        }
    }
    return 0;
}
