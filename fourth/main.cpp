#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{

    double x = 0.91253;
    double result = 0.;
    double y_left = 0.6;
    double y_right = 2.4;
    double y_step = 0.8;

    ofstream file("..\\result.txt");
    if(!file.is_open()) return 0;

    cout << "x\ty\tresult" << endl;
    file << "x\ty\tresult" << endl;
    for(double y = y_left; y <= y_right; y += y_step)
    {
        double dividend = sqrt(pow(x,3)) * y * y - cos(y);
        double divisor = pow(sin(x), 3) - sin(0.2 * y);

        result = dividend / divisor;
        cout << x << "\t" << y << "\t" << result << endl;
        file << x << "\t" << y << "\t" << result << endl;
    }

    file.close();

    return 1;
}
