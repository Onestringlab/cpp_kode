#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    double x;

    cout << "==================================="<< endl;
    cout << "| o |   sin   |   cos   |   tan   |"<< endl;
    cout << "==================================="<< endl;

    cout << setprecision(5);
    cout << fixed << showpoint;
    for(i=0;i<=90;i++)
    {
        //konversi dari derajat ke radian
        x = (i * 3.14159) / 180;
        cout << "| " << i << " | "<< sin(x);
        cout << " | " << cos(x);
        cout << " | " << tan(x) << " |" << endl;
    }

}
