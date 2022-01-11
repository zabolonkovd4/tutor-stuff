#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for(double x = 1; x <= 3; x += 0.23)
    {
        double Z = sin(sqrt(pow(x, 3))) + 6 * cos(pow(6, x)) - 3 * x;
        cout << "Z(x) = " << Z << " при x = " << x << endl; 
    }

    return 1;
}
