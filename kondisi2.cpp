#include <iostream>
using namespace std;

int main (){
    int nilai;

    cout <<"Input Nilai Mahasiswa: ";
    cin >>nilai;
    
    if(nilai > 80){
        cout << "A";
    }
    else if(nilai > 70){
        cout << "B";
    }
    else
    cout << "C";
    return 0;

}
