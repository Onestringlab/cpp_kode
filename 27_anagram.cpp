#include <iostream>
#include <string>
using namespace std;

int anagram (string string1, string string2)
{
    int i,st,pj;
    char temp1, temp2;

    int data1[26] = {0};
    int data2[26] = {0};

    pj = string1.size();
    for(i=0; i<pj ;i++)
    {
        temp1 = string1[i] - 'a';
        temp2 = string2[i] - 'a';
        data1[temp1]++;
        data2[temp2]++;
    }

    st = 1;
    for(i=0; i<26 ;i++)
    {
        cout << data1[i] << " " << data2[i] << endl;
        if(data1[i] != data2[i])
        {
            st = 0;
            break;
        }
    }
    return st;
}

int main()
{
    string string1;
    string string2;
    int cek;

    cout << "Kata 1: ";
    cin >> string1;
    cout << "Kata 2: ";
    cin >> string2;

    cek = anagram(string1, string2);
    if(cek==1)
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Bukan Anagram";
    }
}
