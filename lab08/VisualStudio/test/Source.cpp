#include <iostream>
#include <math.h>

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
    if (a <= b - 32) {
        c = 1;
        cout << "Результат: ";
    }
    else {
        c = 0;
        cout << "Результат: ";
    }
    return c;
}


int s_calculation()
{
    cout << "\n\nЗадача 8.2.3";
    cout << "\nПеревiд чисел в шiстнадцятирiчну систему";
    int x, y, z;
    cout << "\nВведiть x: "; cin >> x;
    cout << "Результат: " << hex << x << endl;
    cout << "Введiть y: "; cin >> y;
    cout << "Результат: " << hex << y << endl;
    cout << "Введiть z: "; cin >> z;
    cout << "Результат: " << hex << z << endl;
    cout << "\nЗадача 8.1\n";
    double a, b, c, d, S;
    a = pow(x, 2) - pow(y, 3);
    b = (z * z) * pow(2.718281828, x);
    c = 12 * x + ((y * y) - 3.14 * sqrtl(z));
    d = b / c;
    S = a + sqrtl(d);
    cout << "S = " << S << "\n";
    return 0;
}