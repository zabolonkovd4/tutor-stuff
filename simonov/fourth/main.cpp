#include <iostream>
#include <cmath>

using namespace  std;

int main()
{
    for(double x = -2; x <= 2; x += 0.3)
    {
        double Z = sin(x + 5);
        cout << "Z = " << Z << " while x = " << x << endl;
    }

    return 1;
}
