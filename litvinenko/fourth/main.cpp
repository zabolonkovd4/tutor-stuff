#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double x = 2.58;
    double M = sin(pow(-x, 3)) + pow(x + 7, 2);
    double N = atan(sqrt(x)) + sqrt(2 * pow(x, 4));

    double P = M + N;
    cout << "P = " << P << endl;

    return 1;
}
