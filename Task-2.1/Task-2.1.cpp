#include <iostream>
using namespace std;
#include <math.h>
#define pi 3.14159

int main()
{
    system("chcp 1251");

    double r, R, h, l;
    double x, a;
    cout << "Введите переменные r, R, h: " << std::endl;
    cin >> r >> R >> h;


    if (r > 0 and R > 0 and h > 0)
    {
        cout << "V = " << static_cast<double>(1) / 3 * pi * h * (pow(R, 2) + R * r + pow(r, 2)) << std::endl;
        l = sqrt(pow(R - r, 2) + pow(h, 2));
        cout << "S = " << pi * (pow(R, 2) + (R + r) * l + pow(r, 2)) << std::endl;
    }
    else
    {
        cout << "Ошибка" << std::endl;   
    }


   
    cout << "Введите переменные x, a: " << std::endl;
    cin >> x >> a;

    if (abs(x) < 0)
    {
        cout << "w = " << a * log10(abs(x)) << std::endl;
    }
    else if (abs(x) >= 0)
    {
        cout << "w =" << sqrt(a - pow(x, 2));
    }

    return(0);
}
