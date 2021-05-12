#include <iostream>
#include <math.h>
#include "lib82.h"

using namespace std;

char name()
{
    cout << "Розробник: Турик Богдан Євгенович  (c)\n" << endl;
    return 0;
}

int calc()
{
    cout << "Задача 8.2.2\n";
    int a, b, c;
    cout << "a <= b-32 ?\nВведiть: a, b : ";
    cin >> a >> b;
    if(a <= b - 32){
        c == 1;
        cout << "Результат: ";
    }else{
        c == 0;
        cout << "Результат: ";
    }
    return c;
}


int s_calculation()
{
    cout << "\n\nЗадача 8.2.3";
    cout << "\nПеревiд чисел в шiстнадцяткову систему";
    int x, y, z;

do{
    cout << "\nx y z не можуть дорiвнювати 0 одночасно\n";
    x = 0;
    y = 0;
    z = -1;
    cout << "Введiть x: ";
    cin >> x;
    cout << "Результат: " << hex << x << endl;
    cout << "Введiть y: ";
    cin >> y;
    cout << "Результат: " << hex << y << endl;
    while(z < 0){
        cout << "Введiть додатнє z: ";
        cin >> z;
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "\nВведiть x y z знову";
    }
}
while(x == 0 && y == 0 && z == 0);
    cout << "Результат: "<< hex << z << endl;
    cout << "\nЗадача 8.1\n";
    double a, b, c, d, S;
    cout << "\nx = "<< dec << x << " y = "<< dec << y << " z = "<< dec << z;
    a = pow(x, 2) - pow(y, 3);
    b =(z*z) * pow(2.718281828, x);
    c = 12 * x + ((y*y)-3.14* sqrtl(z));
    d = b / c;
    S = a + sqrtl(d);
    cout << "\nS = " << S << "\n";
    system("pause");
    return 0;
}
