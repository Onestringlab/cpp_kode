#include <iostream>
using namespace std;

double ratarata(double data[], int p)
{
    int i;
    double total,rata2;

    total = 0;
    for(i = 0; i < p; i++)
    {
        total = total + data[i];
    }
    rata2 = total / p;
    return rata2;
}

int main()
{
    double data[] = {8.14,7.21, 6.59, 5.73};
    double rata2;
    int p;

    p = sizeof(data)/sizeof(data[0]);
    rata2 = ratarata(data, p);

    cout << "Rata-rata Array = " << rata2 << endl;
}
