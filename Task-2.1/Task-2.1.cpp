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

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    #include <iostream>
using namespace std;
#include <math.h>


int main()
{
	system("chcp 1251");
	double S, p, n, m, r, num;

	cout << "Введите переменные S, p, n: " << endl;
	cin >> S >> p >> n;

	if (S > 0 and n > 0 and p >= 0)
	{
		if (p == 0)
		{
			m = S / 12 * n;
			cout << "Месячная выплата = " << m << endl;
		}
		else
		{
			r = p / 100;

			m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

			cout << "Месячная выплата = " << m << endl;
		}
	}




	cout << "Введите переменные S, m, n: " << endl;
	cin >> S >> m >> n;
	r = 0;
	if (S > 0 and n > 0 and m > 0)
	{
		if (m == S / 12 * n)
		{
			cout << "Процент = " << 0 << endl;
		}
		else 
		{	
			for (double i = 0; i < 1; i = i + 0.0001)
			{
				num = ((S * i * pow(1 + i, n)) / (12 * (pow(1 + i, n) - 1)));
				num = round(num);
				if (round(m)/10 == num/10)
				{
					r = i;
					cout << "Процент = " << r * 100 << endl;
				}

			}
		}
	}
    
    
    
    
    
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream fout("cppstudio.txt");
	fout << "Работа с файлами";
	fout.close();
	setlocale(0, ""); // корректное отображение Кириллицы
	char buff[20]; // буфер промежуточного хранения для текста из файла
	ifstream fin("cppstudio.txt"); // открыли файл для чтения
	fin.getline(buff, 20); // считали строку из файла
	fin.close(); // закрываем файл
	cout << buff << endl; // вывод строки
	return 0;
}
    
    
    
    
    
    
    return(0);
}
