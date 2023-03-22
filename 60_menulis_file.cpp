#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fileku("nama.txt", ios::app);

    fileku << "Rajo Intan" << endl;
    fileku << "Ratu Mas" << endl;

    fileku.close();

    return 0;
}
