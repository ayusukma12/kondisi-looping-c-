#include <iostream>
using namespace std;

int main(){
    int jum;
    cout << "Masukan Jumlah Bintang : ";
    cin >> jum;

    for (int b = 1; b <= jum; b++)
    {
        for (int k = 1; k <= b; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int b = 1; b <= jum; b++)
    {
        for (int k = jum; k > b; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}