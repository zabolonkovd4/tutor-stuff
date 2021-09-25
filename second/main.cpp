#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    wcout << L"Введите x: " << endl;
    double x; cin >> x;
    wcout << L"Введите y: " << endl;
    double y; cin >> y;

    double inside_cos = M_PI * x + 4 * sqrt(y);
    double inside_sin = 2 * M_PI - pow(y, 3);
    double result = 0.252 * pow(cos(inside_cos), 4) + pow(sin(inside_sin), 2);

    wcout << L"Результат вычисления функции Z(x, y) = " << result << endl;

    return 1;
}
