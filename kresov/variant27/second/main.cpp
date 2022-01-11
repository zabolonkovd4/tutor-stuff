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

    if(x * y <= 2)
        F = 0.3 * y * x * x;
    else if(x * y > 2 && x * y < 4)
        F = pow((x * x - 4 * y), 3) + x;
    else if(x * y >= 3)
        F = 2 * y - sqrt(pow(sin(x), 3));

    cout << "F(x,y) = " << F << endl;

    return 1;
}
