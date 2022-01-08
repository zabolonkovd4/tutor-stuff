#include <stdio.h>
#include <cmath>

using namespace  std;

int main()
{
    for(double a = 0.1; a <= 2.5; a += 0.18)
    {
        for(double b = 4.5; b <= 6; b += 0.2)
        {
            double D = sqrt(sin(a) + cos(b)) / sin(pow(a, 2) - b);
            printf("\nD(a, b) = %f при a = %.3f и b = %.3f", D, a, b);
        }
    }
    return 1;
}
