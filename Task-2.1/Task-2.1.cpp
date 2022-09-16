#include <iostream>
using namespace std;
#define pi 3.14159

int main()
{
    system("chcp 1251");

    double r, R, h, V, l;
    cout << "Введите переменные r, R, h: " << std::endl;
    cin >> r >> R >> h;

    if (r > 0 and R > 0 and h > 0)
    {
        cout << "V = " << static_cast<double>(1) / 3 * pi * h * (pow(R, 2) + R * r + pow(r, 2)) << std::endl;
        l = sqrt(pow(R - r, 2) + pow(h, 2));
        cout << "S = " << pi * (pow(R, 2) + (R + r) * l + pow(r, 2)) << std::endl;
    }
    return(0);
}