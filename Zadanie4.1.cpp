#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,y,c;

    cout << "Podaj trzy liczby calkowite:";
    cin >> x >> y >> c;

    int liczba = max(x, max(y, c));

    cout << "Liczba " << liczba << " jest najwieksza";
    
    return 0;
}