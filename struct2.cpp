#include <iostream>
using namespace std;

struct alamatDetail
{
    string desa;
    string kota;
};

struct mahasiswa
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //deklarasi variabel struct
    mahasiswa mhs;
    // mengisi  data
    cout << "isikan data nama :";
    cin >> mhs.nama;
    cout << "isikan data alamat :";
    cin >> mhs.alamat;
    cout << "isikan data umur :";
    cin >> mhs.umur;

    //menampilkan data
    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
}