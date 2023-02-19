#include <iostream>
#include <string>
using namespace std;

int palindrome(string mystring)
{
    int i,st,pj;

    pj = mystring.size();
    st = 1;
    for(i=0; i<pj/2;i++)
    {
        if(mystring[i]!=mystring[pj-i-1])
        {
            st = 0;
            break;
        }
    }
    return st;
}

int main()
{
    string string1 = "siapa";
    string string2 = "okodoko";
    string string3;
    int cek;

    cout << "Kata: ";
    cin >> string3;
    cek = palindrome(string3);

    if(cek==1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Bukan Palindrome";
    }
}

