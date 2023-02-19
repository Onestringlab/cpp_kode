#include <iostream>
using namespace std;

void der_fib(int n)
{
    // deret fibonacci
    //0 1 1 2 3 5 8 13 21 34

    int temp1, temp2, fib, i;

    temp1=0;
    temp2=1;
    for(i = 2; i< n; i++)
    {
        fib = temp1 + temp2;
        cout << fib << " ";
        temp1 = temp2;
        temp2 = fib;
    }
}

int main()
{
    int n;

    cout <<"Jumlah Deret Fibonacci: "; cin >> n;
    der_fib(n);
    return 0;
}
