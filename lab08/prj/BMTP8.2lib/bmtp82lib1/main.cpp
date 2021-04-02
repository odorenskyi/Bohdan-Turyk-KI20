#include <iostream>
#include <math.h>

using namespace std;

char name()
{
    cout << "–озробник: “урик Ѕогдан ™вгенович  (c)\n" << endl;
    return 0;
}

int calc()
{
    int a, b, c;
    cout << "a<= b-32 \n¬ведiть: a, b : ";
    cin >> a >> b;
    if(a <= b - 32){
        c = 1;
    }else{
        c = 0;
    }
    return c;
}


int s_calculation()
{
    cout << "\n\nѕеревiд чисел в шiстнадц€тирiчну систему";
    int x, y, z;
    cout << "\n¬ведiть x: "; cin >> x;
    cout << hex << x << endl;
    cout << "¬ведiть y: "; cin >> y;
    cout << hex << y << endl;
    cout << "¬ведiть z: "; cin>>z;
    cout << hex << z << endl;
    double a, b, c, d, S;
    a = pow(x, 2) - pow(y, 3);
    b =(z*z) * pow(2.718281828, x);
    c = 12 * x + ((y*y)-3.14* sqrtl(z));
    d = b / c;
    S = a + sqrtl(d);
    cout << "\nS = " << S << "\n";
    return 0;
}
