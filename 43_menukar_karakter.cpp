#include <iostream>
#include <cstring>
using namespace std;

string gankar(string txt, char lama, char baru)
{
    int i;
    i=0;
    while(txt[i] != '\0')
    {
        if(txt[i] == lama)
        {
            txt[i] = baru;
        }
        i++;
    }
    return txt;
}

int main()
{
    string txt = "Saya Belajar C++";
    char lama, baru;
    lama = 'a';
    baru = 'u';
    cout << txt << endl;
    txt = gankar(txt,lama,baru);
    cout << txt << endl;
    txt = gankar(txt,'B','P');
    cout << txt << endl;
}
