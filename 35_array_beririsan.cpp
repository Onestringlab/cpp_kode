#include <iostream>
using namespace std;

void irisan(int arr1[], int p1, int arr2[], int p2)
{
    int i,j,c;
    c=0;
    for(i = 0; i < p1; i++)
    {
        for(j = 0; j < p2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                c=1;
            }
        }
    }
    if(c==1)
    {
        cout << "Ada irisan data" << endl;
    }
    else if(c==0)
    {
        cout << "Tidak ada irisan data" << endl;
    }
}

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9};
    int arr3[] = {1,6};

    int p1,p2,p3,c;

    p1 = sizeof(arr1)/sizeof(arr1[0]);
    p2 = sizeof(arr2)/sizeof(arr2[0]);
    p3 = sizeof(arr3)/sizeof(arr3[0]);

    irisan(arr1,p1,arr2,p2);
    irisan(arr1,p1,arr3,p3);
    irisan(arr2,p2,arr3,p3);
}






