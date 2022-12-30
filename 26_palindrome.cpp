#include <iostream>
#include <cstring>
using namespace std;

int palindrome(char mystring[])
{
    int panjang = strlen(mystring);
    int status = 1;
    int i;

    for(i=0; i<panjang/2; i++)
    {
        if(mystring[i] != mystring[panjang-1-i])
        {
            status = 0;
            break;
        }
    }
    return status;
}

int main()
{
    char string1[] = "Cek Palindrome";
    char string2[] = "okodoko";
    char string3[] = "katak";

    int status;

    status = palindrome(string1);
    if(status==1) cout << string1 <<" -> Palindrome" << endl;
    else cout << string1 << " -> Bukan Palindrome" << endl;

    status = palindrome(string2);
    if(status==1) cout << string2 << " -> Palindrome" << endl;
    else cout << string1 << " -> Bukan Palindrome" << endl;

    status = palindrome(string3);
    if(status==1) cout << string3 << " -> Palindrome" << endl;
    else cout << string1 << " -> Bukan Palindrome" << endl;
}



