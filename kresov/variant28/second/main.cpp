#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cout << "Введите x: " << endl;
    cin >> x;

    cout << "Введите y: " << endl;
    cin >> y;

    double F = 0;

    if(x / y <= -2)
        F = 0.14 * pow(y, 4) - x * x;
    else if(x / y > -2 && x / y < 4)
        F = pow(sin(x), 2 * y) + cos(x);
    else if(x / y >= 4)
        F = 3 * cos(x) / sin(-y);

    cout << "F(x,y) = " << F << endl;

    return 1;
}
