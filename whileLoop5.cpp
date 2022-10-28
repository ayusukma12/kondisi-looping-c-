#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int angka = 1;
    int baris = 1000000000;

    while (baris >= 1)
    {
    cout << baris << endl;
        baris /= 10;
    }  
}