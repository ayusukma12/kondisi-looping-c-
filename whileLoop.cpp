#include <iostream>
using namespace std;

int main (){
    int awal, akhir;
    cout << "Masukan angka awal : ";
    cin >> awal;
    cout << "Masukan angka akhir : ";
    cin >> akhir;
    int i = awal;
    while (i <= akhir)
    {
        cout << i << ". while loop" << endl;
        i ++;
    }
    
}

