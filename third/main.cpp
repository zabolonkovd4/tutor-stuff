#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double step_a = 0.18; double step_b = 1.;
    double left_a = 0.15; double right_a = 2.;
    double left_b = 6.; double right_b = 8.;
    cout << "a\tb\tresult" << endl;

    /* If x is a finite value less than 0, and y is a finite noninteger,
    a domain error occurs, and a NaN is returned.

    Except as specified below, if x or y is a NaN, the result is a NaN.

    If x is negative, then large negative or positive y values yield a NaN
    as the function result, with  errno  set  to  EDOM,  and  an  invalid
    (FE_INVALID)  floating-point  exception.  For example, with pow(),
    one sees this behavior when the absolute value of y is greater than about
    9.223373e18. */

    for(double a = left_a; a <= right_a; a += step_a)
    {
        for(double b = left_b; b <= right_b; b += step_b)
        {
            double inside_cos = 1.86 * b;
            double inside_sin = sqrt(a) * b;
            double result = pow(abs(sin(inside_sin)), 2.2) - 2. * pow(cos(inside_cos), 4.);

            cout << setprecision(4) << a << '\t' << b << '\t';
            cout << result << endl;
        }
    }

    return 1;
}
