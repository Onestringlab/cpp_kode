#include <iostream>
#include <cstring>
using namespace std;

string balik(string txt)
{
    char temp;
    int i,p;

    p = txt.length();
    for(i=0; i<(p/2);i++)
    {
        temp = txt[i];
        txt[i] = txt[p - i -1];
        txt[p - i - 1] = temp;
    }
    return txt;
}

int main()
{
    string txt = "kemari";
    cout << txt << endl;
    txt = balik(txt);
    cout << txt << endl;

    txt = "pergilah";
    cout << balik(txt) << endl;


}
