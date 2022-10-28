#include <iostream>
using namespace std;

int main(){
    int b, k;
    int jum_k = 1;
    for (b = 1; b <= 5; b++)
    {
        for (k = 1; k <= jum_k; k++)
        {
            cout << k << " ";
        }
        jum_k ++;
        cout << endl;
    }
}
