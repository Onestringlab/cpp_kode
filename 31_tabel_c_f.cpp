#include <iostream>
#include <iomanip>
using namespace std;

double c_f(double c)
{
    double f;
    f = (c * 1.8) + 32;
    return f;

}

int main()
{
    double m, s, t, c, f;

    cout<<"Mulai\t: "; cin >> m;
    cout<<"Sampai\t: "; cin >> s;
    cout<<"Naik\t: "; cin >> t;

    cout << "C \t F"<< endl;
    cout << fixed << setprecision(2);
    for(c = m; c <= s; c += t)
    {
        cout << c << " \t " << c_f(c) << endl;
    }
}
