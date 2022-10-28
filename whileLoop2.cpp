#include <iostream>
using namespace std;

int main(){
    int awal, akhir;
    cout << "Ingin menampilkan angka Ganjil atau Genap? " << endl 
    << "Jika Ganjil maka Masukan angka awal Ganjil" << endl 
    << "Jika Genap maka Masukan angka awal genap" << endl;
   
    cout << "Masukan angka awal : ";
    cin >> awal;
    cout << "Masukan angka akhir : ";
    cin >> akhir;
    int i = awal;
    while (i <= akhir)
    {
        cout << i << ". while loop" << endl;
        i += 2;
    }
    
}