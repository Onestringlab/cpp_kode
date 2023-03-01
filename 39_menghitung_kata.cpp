#include <iostream>
using namespace std;

int kata(string txt, int p)
{
    int i,k;

    p = txt.size();
    k = 1;
    for(i = 0; i < p; i++)
    {
        if(txt[i] == ' ')
            k++;
    }
    return k;
}

int main()
{
    int p;
    string txt;

    txt = "belajar bahasa pemrograman C++";
    p = txt.size();
    cout << txt << " : " << kata(txt,p) << " kata" << endl;

    txt = "aku kamu";
    p = txt.size();
    cout << txt << " : " << kata(txt,p) << " kata" << endl;
}
