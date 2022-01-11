#include <stdio.h>
#include <cmath>
using namespace  std;
int main()
{
    for(double a = 3; a <= 7; a += 1.25)
    {
        for(double b = 3; b <= 6; b += 0.185)
        {
            double D = (pow(a * b, 1. / 7) - pow(2 * b, 1. / 5)) / pow(a + b, 2);
            printf("\nD(a, b) = %f при a = %.3f и b = %.3f", D, a, b);
        }
    }
    return 1;
}
