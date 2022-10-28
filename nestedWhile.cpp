#include <iostream>
using namespace std;

int main(){
    string nama;
    cout << "masukan nama kota : ";
    cin >> nama;
    
    int i = nama.length();

    while (i >= 0){
        int a=0;
        while (a <= i)
        {
            cout << nama[a];
            a++;
        }
        cout << endl;
        i--;
    }
    
}