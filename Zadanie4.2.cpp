#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x,y,c;

    cout << "Podaj trzy liczby calkowite:";
    cin >> x >> y >> c;

    if (x > y && x > c)
    {
        cout << "Liczba "<< x <<" jest najwieksza";
    }
    else if(y > x && y > c)
    {
        cout << "Liczba "<< y <<" jest najwieksza";
    }
    else if(c > x && c > y)
    {
        cout << "Liczba "<< c <<" jest najwieksza";
    }
    
    return 0;
}