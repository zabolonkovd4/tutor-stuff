#include <iostream>
#include <cmath>

using namespace  std;

int main()
{
    for(double a = -1; a < 2; a += 0.5)
    {
        for(double b = 0; b < 3; b += 0.3)
        {
            double D = pow(cos(2 * a), 2) / ((3 * b) + pow(a, 3));
            cout << "D = " << D << " при a = " << a << " и b = " << b << endl;
        }
    }

    return 1;
}
