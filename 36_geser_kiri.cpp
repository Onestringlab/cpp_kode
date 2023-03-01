#include <iostream>
using namespace std;

void geser_kiri(int arr1[], int p)
{
    int i,temp;

    temp = arr1[0];
    for(i = 0; i < p; i++)
    {
        arr1[i] = arr1[i+1];
    }
    arr1[p - 1] = temp;
}

void geser_kiri_kali(int arr1[], int p, int n)
{
    int i;
    for(i = 0; i < n; i++)
        geser_kiri(arr1,p);
}

int main()
{
    int arr1[] = {1,2,3,4,5}; //{2,3,4,5,1}
    int i, p;

    p = sizeof(arr1)/sizeof(arr1[0]);
    geser_kiri(arr1,p);

    for(i = 0; i < p; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    geser_kiri_kali(arr1,p,2);
    for(i = 0; i < p; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}
