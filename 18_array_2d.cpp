#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int mat_a[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,1},
        {1,3,5,6,7}
    };

    cout <<mat_a[0][3]<<"\n";
    cout <<mat_a[1][1]<<"\n";
    cout <<mat_a[2][3]<<"\n";

    for(i=0; i<3 ;i++)
    {
        for(j=0;j<5;j++)
        {
            cout <<mat_a[i][j]<<" ";
        }
        cout << "\n";
    }

    mat_a[2][0] = 9;
    mat_a[1][4] = 3;

    cout <<"\n";
    for(i=0; i<3 ;i++)
    {
        for(j=0;j<5;j++)
        {
            cout <<mat_a[i][j]<<" ";
        }
        cout << "\n";
    }

}
