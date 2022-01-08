#include <stdio.h>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    for(double x = 2; x <= 4; x += 0.125)
    {
        double Z = 1/tan(pow(x, 2)) + cos(3 - x);
        printf("\nZ = %f при x = %.3f ",Z,x);
    }
    return 1;
}
