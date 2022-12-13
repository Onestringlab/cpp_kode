#include <iostream>
using namespace std;

int main()
{
   cout << "Belajar Perulangan While\n";

   //inisialisasi
   int i = 10;

   //kondisi
   while(i >= 0)
   {
        cout<< "nilai i = " << i << "\n";

        //mencapai kondisi false/salah
        i = i - 3;
   }

   int j = 0;
   while(j <= 10)
   {
        cout<< "nilai j = " << j << "\n";

        //mencapai kondisi false/salah
        j = j + 2;
   }

   cout << "Sudah Belajar Perulangan While";
}
