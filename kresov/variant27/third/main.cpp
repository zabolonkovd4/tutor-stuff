#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for(double x = 1; x <= 7; x += 1.94)
    {
        double Z = cos(2 * x) - log(sqrt(7 * x));
        cout << "Z(x) = " << Z << " при x = " << x << endl; 
    }

    return 1;
}
