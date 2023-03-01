#include <iostream>
#include <cstring>
using namespace std;

string tukar (string txt, int p)
{
    int i;
    for(i = 0; i < p; i++)
    {
        if(isupper(txt[i]))
            txt[i] = tolower(txt[i]);
        else if (islower(txt[i]))
            txt[i] = toupper(txt[i]);
    }
    return txt;
}

int main()
{
    string txt = "Kami akan berjuang OK!";
    int p = txt.size();

    cout << txt << endl;
    txt =  tukar(txt,p);
    cout << txt << endl;
}
