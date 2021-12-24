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

    if(2 * x + y < 1)
        F = pow(x, 5) - sqrt(y);
    else if(2 * x + y >= -1 && 2 * x + y <= 1)
        F = 3 - x + y;
    else if(2 * x + y > 1)
        F = 9 * y - sqrt(x);

    cout << "F(x,y) = " << F << endl;

    return 1;
}
