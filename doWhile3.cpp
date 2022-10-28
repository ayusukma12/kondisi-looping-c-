#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int bulan;
    int kolom = 1;

    do
    {
        cout << "masukan jumlah hari dalam satu bulam (28, 29, 30,atau 31) : ";
        cin >> bulan;
    } while (bulan < 28 || bulan > 31);

    cout << "Minggu Senin Selasa Rabu Kamis Jumat Sabtu" << endl;
    cout << ".........................................." << endl;

    for (int hari = 1; hari<= bulan; hari++)
    {
        cout << setw(6) << hari;
        kolom++;
        if (kolom>7)
        {
            cout << endl;
            kolom = 1;
        }
    }
}