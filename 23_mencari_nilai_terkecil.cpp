#include <iostream>
using namespace std;

int nilai_mini(int my_array[], int pjg);

int main()
{
    int my_array_1[] = {5,6,4,3,2,1,8,9,7};
    int my_array_2[] = {55,26,34,43,52,81,98,19,27,63};
    int mini;

    mini = nilai_mini(my_array_1,9);
    cout << "Nilai terkecil: " << mini <<"\n";

    mini = nilai_mini(my_array_2,10);
    cout << "Nilai terkecil: " << mini <<"\n";

    return 0;
}
int nilai_mini(int my_array[], int pjg)
{
    int mini =  my_array[0];
    for(int i=0;i<pjg;i++)
    {
        if(mini > my_array[i])
        {
            mini = my_array[i];
        }
    }
    return mini;
}

