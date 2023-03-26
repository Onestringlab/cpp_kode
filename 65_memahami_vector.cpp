#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int jumlah;
    // cout << "Jumlah data : ";
    // cin >> jumlah;

    // vector<int> data(jumlah);

    // int i;
    // for(i=0;i<jumlah;i++)
    // {
        // cout << "Data ke " << i+1 << " : ";
        // cin >> data[i];
    // }


    vector<int> data;
    int i = 0;
    int nilai;

    while(true)
    {
        cout << "Data ke " << i+1 << " : ";
        cin >> nilai;

        if(nilai == -1) break;

        data.push_back(nilai);
        i++;
    }

    for(auto datum : data)
    {
        cout << datum << endl;
    }
    return 0;
}

