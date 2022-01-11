#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double maximum = -INFINITY;
    for(double y = 3; y <= 5; y += 0.12)
    {
        double W = tan(y) / cos(y * y + 5);
        cout << "W(y) = " << W << " при y = " << y << endl; 
        if(maximum < W)
            maximum = W;
    }
    cout << "Максимульное значение функции W(y) = " << maximum << endl;
    return 1;
}
