#include <iostream>
#include <cctype>
using namespace std;

int hur_voc(string txt)
{
    int i,p,h;
    char c;

    p = txt.size();
    h=0;
    for(i = 0; i < p; i++)
    {
        c = tolower(txt[i]);
        if(c == 'a'||c == 'i'|| c == 'u' ||
           c == 'e' || c == 'o')
        {
            h++;
        }
    }
    return h;
}

int main()
{
    string txt = "Ayo Belajar Pemrograman";

    cout <<"Jumlah huruf vokal: "<< hur_voc(txt) << endl;

    return 0;
}
