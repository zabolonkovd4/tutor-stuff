#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << "a\tb\tZ(a,b)" << endl;

    for(double a = 0.15; a <= 2.; a += 0.18)
    {
        for(double b = 6.; b <= 8.; b += 1.)
        {
            double Z = pow(abs(sin(sqrt(a) * b)), 2.2) - 2. * pow(cos(1.86 * b), 4.);

            cout << setprecision(4) << a << '\t' << b << '\t';
            cout << Z << endl;
        }
    }

    return 1;
}
