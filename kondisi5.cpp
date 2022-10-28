#include <iostream>
using namespace std;

int main () {
    int Jam,Menit,Detik;
    
    cout << " Masukan Angka \n";
    cin >> Detik;

    Jam = Detik / 3600;
    Detik = Detik - (3600 * Jam);
    Menit = Detik / 60;
    Detik = Detik - (60 * Menit);

    cout << " jam saat ini : ";
    cout << Jam << " Jam " << Menit << " Menit " << Detik << " Detik";

    return 0;
}