#include <iostream>
using namespace std;

int main(){
    int x;

    cout << "Podaj trzy liczby calkowite:";
    cin >> x;

    for (int n = 1; n < 3; n++)
    {
        int y;

        cin >> y;

        if (y > x){
            x = y;
        }
    }

    cout << "Liczba " << x << " jest najwieksza";
}