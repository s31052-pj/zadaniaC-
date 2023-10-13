#include <iostream>
using namespace std;

int main(){
    int x;
    
    cout<<"Podaj liczbe calkowita:";
    cin >> x;

    if (x>=1)
    {
        cout<<"Liczba dodatnia";
    }
    else if (x<=-1)
    {
        cout<<"Liczba ujemna";
    }
    else
    {
        cout<<"Zero";
    }
    
    return 0;
}