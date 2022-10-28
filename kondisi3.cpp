#include <iostream>
using namespace std;

int main (){
    int nilai;

    cout <<"Input Nilai Mahasiswa: ";
    cin >>nilai;
    
    if(nilai > 80){
        cout << "A";
    }
    else if(nilai >= 75){
        cout << "B";
    }
    else if(nilai >= 65){
        cout << "C";
    }
    else if(nilai >= 40){
        cout << "D";
    }
    else
    cout << "E";
    return 0;

}