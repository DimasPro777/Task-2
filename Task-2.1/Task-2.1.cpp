#include <iostream>
using namespace std;
#include <math.h>
#define pi 3.14159

int main()
{
    system("chcp 1251");

    double r, R, h, l;
    double x, a, b, y;
    double n;
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

    if (abs(x) < 1 and abs(x) > 0)
    {
        cout << "w = " << a * log(abs(x)) << std::endl;
    }
    else if (abs(x) >= 1 and a - pow(x, 2) >= 0)
    {
        cout << "w =" << sqrt(a - pow(x, 2)) << std::endl;
    }
    else
    {
        cout << "Ошибка" << std::endl;
    }












    cout << "Введите переменные b, x, y: " << std::endl;
    cin >> b >> x >> y;
    
    if (b - y > 0 and b - x >= 0)
    {
        cout << "z = " << log(b - y) * sqrt(b - x) << std::endl;
    }
    else
    {
        cout << "Ошибка" << std::endl;
    }













    cout << "Введите переменную n: " << std::endl;
    cin >> n;
    int n1 = n;
    if (n >= 0 and n == n1)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << n + i << std::endl;
        }
    }
    else
    {
        cout << "Ошибка" << std::endl;
    }






    for (float X = -4; X < 4.5; X += 0.5)
    {
        if (x - 1 != 0)
        {
            cout << "y = " << (pow(X, 2) - 2 * X + 2) / (X - 1) << " x = " << X << std::endl;
        }
        else
        {
            cout << "Ошибка"
        }
    }

}
