#include <iostream>
using namespace std;

int main(){
    int awal,akhir;
    cout << "Masukan Angka Awal : ";
    cin >> awal;
    cout << "Masukan Angka Akhir : ";
    cin >> akhir;

    int i = awal;
    do
    {
        cout << i << ". Do While Loop" << endl;
    } while (i == akhir);
    
}