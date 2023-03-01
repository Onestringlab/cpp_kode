#include <iostream>
using namespace std;

int naik(int a, int b)
{
    if(a<=b)
    {
        cout << a << " ";
        a++;
        return naik(a,b);
    }
    else
    {
        return 0;
    }
}

int turun (int a, int b)
{
    if(b>=a)
    {
        cout << b << " ";
        b--;
        return turun(a,b);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,i;
    a = 0;
    i = 10;
    naik(a,i);
    cout << endl;
    turun(a,i);
}
