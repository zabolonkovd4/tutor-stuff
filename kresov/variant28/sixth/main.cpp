#include <stdio.h>
#include <cmath>
using namespace  std;
int main()
{
    for(double a = 0.1; a <= 1; a += 0.13)
    {
        for(double b = 3; b <= 6; b += 0.14)
        {
            double D = sqrt(sin(a) + log(b)) / pow(sin(a * b), 2);
            printf("\nD(a, b) = %f при a = %.3f и b = %.3f", D, a, b);
        }
    }
    return 1;
}
