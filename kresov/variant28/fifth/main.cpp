#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for(double x = 2; x <= 4; x += 0.5)
    {
        double F = pow(sin(2 * x), 2) + acos(x) + acos(sqrt(x));
        cout << "F(x) = " << F << " при x = " << x << endl; 
    }

    return 1;
}
