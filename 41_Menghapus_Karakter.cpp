#include <iostream>
#include <cstring>
using namespace std;

string hapus(string txt, char x)
{
    int i,j;
    i = 0;
    while(txt[i] != '\0')
    {
        if(txt[i] == x)
        {
            j = i;
            while(txt[j] != '\0')
            {
                txt[j] = txt[j+1];
                j++;
            }
        }
        else
        {
            i++;
        }
    }
    return txt;
}

int main()
{
    string txt = "Aku Belajar Mandiri";
    char x = 'i';

    cout << txt << endl;
    txt = hapus(txt,x);
    cout << txt << endl;
}

