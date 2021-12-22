#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
    double x = 0.91253;
    double F = 0.;

    ofstream file("..\\result.txt");
    if(!file.is_open()) return 0;

    cout << "x\ty\tF(y)" << endl;
    file << "x\ty\tF(y)" << endl;
    for(double y = 0.6; y <= 2.4; y += 0.8)
    {
        F = (sqrt(pow(x,3)) * y * y - cos(y)) / (pow(sin(x), 3) - sin(0.2 * y));
        cout << x << "\t" << y << "\t" << F << endl;
        file << x << "\t" << y << "\t" << F << endl;
    }

    file.close();

    return 1;
}
