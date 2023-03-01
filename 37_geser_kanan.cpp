#include <iostream>
using namespace std;

void geser_kanan(int arr[], int p)
{
    int i, temp;

    temp = arr[p-1];

    for(i = p-2; i>=0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}

void geser_kanan_kali(int arr[], int p, int n)
{
    int i;
    for(i = 0; i < n; i++)
        geser_kanan(arr,p);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int i, p;

    p = sizeof(arr)/sizeof(arr[0]);

    geser_kanan(arr,p);
    for(i = 0; i < p; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    geser_kanan_kali(arr,p,2);
    for(i = 0; i < p; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
