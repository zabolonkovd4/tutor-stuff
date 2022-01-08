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

    if(x * y <= -2)
        F = 0.27 * y * y - pow(x, 3);
    else if(x * y >= -2 && x * y < 3)
        F = pow(sin(pow(y, 3)), 8);
    else if(x * y >= 3)
        F = cos(x * x) / sin(sqrt(pow(y, 3)));

    cout << "F(x,y) = " << F << endl;

    return 1;
}
