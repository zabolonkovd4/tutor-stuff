#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double x = 0.1289;
    double M = pow(sin(x), 3) * pow(cos(x-2), 2);
    double N = sqrt(3 * cos(x)) + log(x);

    double P = M + N;
    cout << "P = " << P << endl;

    return 1;
}

