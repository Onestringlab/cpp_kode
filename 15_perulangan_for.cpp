#include <iostream>
using namespace std;

int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << "\n--------------\n";
    for(i = 1; i <= 10; i= i + 2)
    {
        cout << i << " ";
    }
    cout << "\n--------------\n";
    for(i = 10; i >= 1; i= i - 1)
    {
        cout << i << " ";
    }
    cout << "\n--------------\n";
    for(i = 0; i <= 10; i= i + 2)
    {
        cout << i << " ";
    }
}
