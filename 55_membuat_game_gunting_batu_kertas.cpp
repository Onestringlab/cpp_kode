#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

#define GUNTING 1
#define BATU 2
#define KERTAS 3

int acak()
{
    int r = (rand() % 3) + 1;
    return r;
}

int main()
{
    int org, kom;
    int sorg=0, skom=0;

    srand(time(0));

    do
    {
        cout << "(1)GUNTING (2)BATU (3)KERTAS" << endl;
        cout << "Orang : ";
        cin >> org;
        kom = acak();
        cout << "Komputer : " << kom << endl;

        if(org == GUNTING && kom == BATU)
        {
            cout << "Komputer Menang" << endl;
            skom++;
        }
        else if(org == GUNTING && kom == KERTAS)
        {
            cout << "Orang Menang" << endl;
            sorg++;
        }
        else if(org == BATU && kom == KERTAS)
        {
            cout << "Komputer Menang" << endl;
            skom++;
        }
        else if(org == BATU && kom == GUNTING)
        {
            cout << "Orang Menang" << endl;
            sorg++;
        }
        else if(org == KERTAS && kom == GUNTING)
        {
            cout << "Komputer Menang" << endl;
            skom++;
        }
        else if(org == KERTAS && kom == BATU)
        {
            cout << "Orang Menang" << endl;
            sorg++;
        }
        else
        {
            cout << "Orang dan Komputer Sama" << endl;
        }
        cout << "Skore Orang : " << sorg << endl;
        cout << "Skore Komputer : " << skom << endl;
        cout << endl;

    }while (sorg != 3 && skom != 3);

    if(sorg==3)
    {
        cout << "HOREE!!! ORANG MENANG" << endl;
    }
    else
    {
        cout << "YAAAA!!! KOMPUTER MENANG" << endl;
    }
}
