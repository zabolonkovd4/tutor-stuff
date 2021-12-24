#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double maximum = 0;
    for(double y = 2; y <= 4; y += 0.25)
    {
        double W = sin(y) - cos(y);
        cout << "W = " << W << " при y = " << y << endl;

        if(maximum < W)
            maximum = W;
    }

    cout << "Максимум = " << maximum << endl;

    return 1;
}
