#include <iostream>
using namespace std;


int main()
{
    bool t = true;
    bool f = false;

    //operator logika dan (and) adalah &&
    cout << "Logika dan (and) " << "\n";
    cout << "t && t = " << (t && t) << "\n";
    cout << "t && f = " << (t && f) << "\n";
    cout << "f && t = " << (f && t) << "\n";
    cout << "f && f = " << (f && f) << "\n\n";

    //operator logika atau (or) adalah ||
    cout << "Logika atau (or) " << "\n";
    cout << "t || t = " << (t || t) << "\n";
    cout << "t || f = " << (t || f) << "\n";
    cout << "f || t = " << (f || t) << "\n";
    cout << "f || f = " << (f || f) << "\n\n";

    //operator logika negasi (negasi) adalah !
    cout << "Logika negasi (not) " << "\n";
    cout << "!t = " << (!t) << "\n";
    cout << "!f = " << (!f) << "\n";

}
