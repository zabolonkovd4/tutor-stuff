#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for(double x = 0.12; x <= 0.9; x += 0.018)
    {
        double F = 1 / tan(2 * x) - sqrt(sin(sqrt(4 - pow(x, 3))));
        cout << "F(x) = " << F << " при x = " << x << endl; 
    }

    return 1;
}
