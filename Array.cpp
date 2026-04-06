#include <iostream>
using namespace std;

int main ()
{
   // deklarasi array disertai inisialisasi
   int dataku[5] = {10, 20, 30, 40,50}; 
   // deklarasi tanpa inisialisasi
   int datamu[5];
   // cara akses (membaca atau mengambil isi array)
   cout << "isi data kedua : " << dataku[1] << endl;

   // mengisi array
   dataku[1] = 200;
   cout << "isi data kedua setelah diubah : " << dataku[1] << endl;
   // menampilkan data dengan perintah satu persatu
   cout << "data pertama = " << datamu[0] << endl;
   cout << "data kedua = " << datamu[1] << endl;
   cout << "data ketiga = " << datamu[2] << endl;
   cout << "data keempat = " << datamu[3] << endl;
   cout << "data kelima = " << datamu[4] << endl;

   //
}