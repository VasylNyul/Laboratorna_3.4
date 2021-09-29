// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.1

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double R = 0.0;  // вхідний аргумент
    double x;  // вхідний аргумент
    double y;  // вхідний параметр
    
    cout<<"x=";cin >>x;
    cout<<"y=";cin >>y;
    cout<<"R=";cin >>y;
    // розгалуження в повній формі
     if(( y<= sqrt(R*R-(x+R)*(x+R) && y >= x )) || (y <= -R*(2*R) && y >= -x ))
        
        cout << "yes" << endl;
     else
        cout << "no" << endl;
    cin.get();
    return 0;
}
