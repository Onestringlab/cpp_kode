#include <iostream>
using namespace std;

int nilai_max(int my_array[], int pjg)
{
    int maxi = my_array[0];
    for(int i=0;i<pjg;i++)
    {
        if(maxi<my_array[i])
        {
            maxi = my_array[i];
        }
    }
    return maxi;
}

int main()
{
    int my_array_1[] = {4,1,5,6,2,3,7,9,8};
    int my_array_2[] = {41,21,35,46,62,83,17,29,18,10};
    int maxi_1 = nilai_max(my_array_1, 9) ;
    int maxi_2 = nilai_max(my_array_2, 10) ;


    cout<<"Nilai terbesar 1: "<< maxi_1 <<"\n";
    cout<<"Nilai terbesar 2: "<< maxi_2 <<"\n";
    return 0;
}
