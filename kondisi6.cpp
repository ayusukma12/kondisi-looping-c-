#include <iostream>
using namespace std;

int main(){
    
    string warna;
    cout << "masukan warna : ";
    cin >> warna;
    if(warna == "M"){
        cout << "Merah";
    }
    else if(warna == "B"){
        cout << "Biru";
    }
    else if(warna == "O"){
        cout << "Orange";
    }
    else
    cout << "Putih";
    return 0;
}