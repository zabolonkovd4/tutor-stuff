#include <iostream>
#include <cmath>

using namespace  std;

int main()
{
    for(double a = -1; a < 2; a += 0.5)
    {
        // TODO: b shouldn't equals 3 on last iteration ( check it )
        for(double b = 0; b < 3; b += 0.3);
        {
            double D = pow(cos(2 * a), 2) / ((3 * b) + pow(a, 3));
            cout << "D = " << D << " while a = " << a << " and b = " << b << endl;
        }
    }

    return 1;
}
