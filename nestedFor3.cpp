#include <iostream>
using namespace std;

int main(){
    int b, k;
    int jum_k = 5;
    int jum = 1;

    for (b = 1; b <= 4; b++)
    {
        for (k = 1; k <= jum; k++)
        {
            cout << "*";
        }
        jum ++;
        cout << endl;
    }

    for (b = 1; b <= 5; b++)
    {
        for (k = 1; k <= jum_k; k++)
        {
            cout << "*";
        }
        jum_k --;
        cout << endl;
    }
}