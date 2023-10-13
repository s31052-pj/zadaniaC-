#include <iostream>
using namespace std;

int main(){
    int x;
    int y=2;

    cout<<"Podaj liczbe calkowita:";
    cin >> x;

    if (x%y==0)
    {
        cout<<"Liczba parzysta";
    }
    else if (x%y==1)
    {
        cout<<"Liczba nie parzysta";
    }
    
    return 0;
}