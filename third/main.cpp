#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double step_a = 0.18; double step_b = 1.;
    double left_a = 0.15; double right_a = 2.;
    double left_b = 6.; double right_b = 8.;
    cout << "a\tb\tresult" << endl;
    // TODO: might be wrong couz of nan results
    for(double a = left_a; a <= right_a; a += step_a)
    {
        for(double b = left_b; b <= right_b; b += step_b)
        {
            double inside_cos = 1.86 * b;
            double inside_sin = sqrt(a) * b;
            double result = pow(sin(inside_sin), 2.2) - 2 * pow(cos(inside_cos), 4);

            cout << a << '\t' << b << '\t' << result << endl;
        }
    }

    return 1;
}
