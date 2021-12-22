#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Введите x: " << endl;
    double x; cin >> x;
    cout << "Введите y: " << endl;
    double y; cin >> y;

    double Z = 0.252 * pow(cos(M_PI * x + 4 * sqrt(y)), 4) + pow(sin(2 * M_PI - pow(y, 3)), 2);

    cout << "Результат вычисления функции Z(x, y) = " << Z << endl;

    return 1;
}
