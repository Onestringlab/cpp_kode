#include <iostream>
#include <cmath>
using namespace std;

int hitD(double a, double b, double c)
{
    // d = (b * b) - (4 * a * c)
    return (b * b) - (4 * a * c);
}

int main()
{
    //
    // 1x^2 - 10x + 16 = 0;
    // 1x^2 + 6x + 9 = 0;
    // 1x^2 + 2x + 9 = 0;

    double a, b, c, D, x1, x2;
    cout << "ax^2 + bx + c = 0" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    D = hitD(a, b, c);
    if(D >= 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout <<"Nilai akar persamaan kuadrat" << endl;
        cout <<"x1 = " << x1 << endl;
        cout <<"x2 = " << x2 << endl;
    }
    else
    {
        cout << "Nilai akar persamaan kuadrat tidak real" << endl;
    }

    return 0;
}
