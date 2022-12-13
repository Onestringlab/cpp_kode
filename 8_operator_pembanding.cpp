#include <iostream>
using namespace std;

int main()
{
    int x = 8;
    int y = 9;
    int z = 8;
    bool hasil;

    // operator pembanding ==, !=, >, <, >=, <=
    // semua operator pembanding HANYA menghasilkan true(1) atau false(0)

    cout << " x = " << x <<"\n";
    cout << " y = " << y <<"\n";
    cout << " z = " << z <<"\n";

    hasil = (x == y);
    cout << " x == y adalah " << hasil << "\n";

    hasil = (x == z);
    cout << " x == z adalah " << hasil << "\n";

    hasil = (x != y);
    cout << " x != y adalah " << hasil << "\n";

    hasil = (x != z);
    cout << " x != z adalah " << hasil << "\n";

    hasil = (x > y);
    cout << " x > y adalah " << hasil << "\n";

    hasil = (y > x);
    cout << " y > x adalah " << hasil << "\n";

    hasil = (x > z);
    cout << " x > z adalah " << hasil << "\n";

    hasil = (x < y);
    cout << " x < y adalah " << hasil << "\n";

    hasil = (y < x);
    cout << " y < x adalah " << hasil << "\n";

    hasil = (x < z);
    cout << " x < z adalah " << hasil << "\n";


    hasil = (x >= y);
    cout << " x >= y adalah " << hasil << "\n";

    hasil = (y >= x);
    cout << " y >= x adalah " << hasil << "\n";

    hasil = (x >= z);
    cout << " x >= z adalah " << hasil << "\n";

    hasil = (x <= y);
    cout << " x <= y adalah " << hasil << "\n";

    hasil = (y <= x);
    cout << " y <= x adalah " << hasil << "\n";

    hasil = (x <= z);
    cout << " x <= z adalah " << hasil << "\n";


}
