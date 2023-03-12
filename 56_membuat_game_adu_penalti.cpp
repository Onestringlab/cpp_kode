#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int acak()
{
    int r = (rand() % 5) + 1;
}

int main()
{
    int i;
    int org, kom, sorg = 0, skom = 0;
    srand(time(0));

    for(i=0;i<5;i++)
    {
        cout << "==========================" << endl;
        cout << "Tendangan ke-" << i + 1 << endl;
        cout << "==========================" << endl;
        cout << "Arah : " << endl;
        cout << "(1)KIRI" << endl;
        cout << "(2)KIRI_ATAS" << endl;
        cout << "(3)ATAS" << endl;
        cout << "(4)KANAN_ATAS" << endl;
        cout << "(5)KANAN" << endl;
        cout << "Arah Tendang Orang : ";
        cin >> org;
        kom = acak();
        cout << "Arah Kiper Komputer : " << kom << endl;

        if(org != kom)
        {
            cout << "GOOOLLL!!!" << endl;
            sorg++;
        }
        else
        {
            cout << "TERTANGKAP!!!" << endl;
        }
        cout << "Skor Orang : " << sorg << endl;
        cout << "Skor Komputer : " << skom << endl;
        cout << endl;

        cout << "Arah Kiper Orang : ";
        cin >> org;
        kom = acak();
        cout << "Arah Tendang Komputer : " << kom << endl;
        if(org != kom)
        {
            cout << "GOOOLLL!!!" << endl;
            skom++;
        }
        else
        {
            cout << "TERTANGKAP!!!" << endl;
        }

        cout << "Skor Orang : " << sorg << endl;
        cout << "Skor Komputer : " << skom << endl;
        cout << endl;
    }

    if(sorg > skom)
    {
        cout << "Orang Menang!!!" << endl;
    }
    else if(sorg < skom)
    {
        cout << "Komputer Menang!!!" << endl;
    }
    else
    {
        cout << "Orang dan Komputer Seri" << endl;
    }


    return 0;

}

