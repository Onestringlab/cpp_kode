#include <iostream>
using namespace std;

int main()
{
    int x = 9;
    int y = 7;
    int z = 9;
    bool t = true;
    bool f = false;

    if(t)
    {
        cout<< "IF bernilai true/benar \n";
    }

    if(t)
    {
         cout<< "IF salah dan ELSE IF 1 benar \n";
    }
    else if(f)
    {
         cout<< "IF salah dan ELSE IF 2 benar \n";
    }
    else
    {
        cout<< "IF salah dan ELSE IF salah";
    }
}
