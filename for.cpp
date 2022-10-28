#include <iostream>
using namespace std;

int main(){
    int b1 , b2 , b3 , jumlah;

    for (b1 = 1; b1 <= 2; b1++)
    {
        for (b2 = 1; b2 <= 5; b2++)
        {
            if (b2 >= 2)
        {
            cout << "+";
        }
            cout << "1";
        }
        cout <<endl;
    }
    for (b3 = 1; b3 <= 3; b3++)
    {
        if (b3 == 3)
        {
            cout << "*0";
        }
        if (b3 >= 2)
        {
            cout << "+";
        }
        
        cout << "1";
    }
    cout << endl;
    jumlah = b1+b2+b3;
    cout << jumlah;
}