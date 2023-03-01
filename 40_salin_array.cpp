#include <iostream>
using namespace std;

int *salin (int *arr, int p)
{
    int i;
    int temp[p];
    for(i = 0; i < p; i++)
    {
        temp[i] = arr[i];
    }
    return temp;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int i,p;

    p = sizeof(arr)/sizeof(arr[0]);
    int temp[p];

    temp = salin(arr, p);

    for(i = 0; i < p; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(i = 0; i < p; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    arr[0] = 9;
    for(i = 0; i < p; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(i = 0; i < p; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;


}
