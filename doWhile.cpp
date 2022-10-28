#include <iostream>
using namespace std;

int main(){
    int awal, akhir;
    cout << "Masukan angka awal : ";
    cin >> awal;
    cout << "Masukan angka akhir : ";
    cin >> akhir;

    int i = awal;
    do
    {
        cout << i << ". Do While Loop" << endl;
        i++;
    } while (i <= akhir);
    
}