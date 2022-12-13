#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int z;

    x = 7;
    y = 9;

    cout << "Nilai x = " << x << "\n";
    cout << "Nilai y = " << y << "\n";

    z = x + y;
    cout << "Nilai x + y = " << z << "\n";

    z = x - y;
    cout << "Nilai x - y = " << z << "\n";

    z = x * y;
    cout << "Nilai x * y = " << z << "\n";

    z = y / x;
    cout << "Nilai y / x = " << z << "\n";

    z = y % x;
    cout << "Nilai y % x = " << z << "\n";

    x++;
    cout << "Nilai x++ = " << x << "\n";

    y--;
     cout << "Nilai y-- = " << y << "\n";

    ++x;
    cout << "Nilai ++x = " << x << "\n";

    --y;
    cout << "Nilai --y = " << y << "\n";


}
