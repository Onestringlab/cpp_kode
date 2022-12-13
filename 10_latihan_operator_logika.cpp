#include <iostream>
using namespace std;

int main()
{
    bool t = true;
    bool f = false;
    bool h;
    int x = 9;
    int y = 7;
    int z = 9;

    h = (t && f) || (t || f);
    cout << "(t && f) || (t || f) = " << h << "\n";

    h = (t || t) && (f && t);
    cout << "(t || t) && (f && t) = " << h << "\n";

    h = (f && t) && ((z >= x) && !(x < y));
    cout << "(f && t) && ((!t || f) && !(x < y)) = " << h << "\n";

    h = !((!t || f) && (t || f)) && (x > y);
    cout << "!((z > y) && (t || f)) && (x > y) = " << h << "\n";





}
