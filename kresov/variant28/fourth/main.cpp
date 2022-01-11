#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double maximum = -INFINITY;
    for(double y = 4; y <= 5; y += 0.15)
    {
        // TODO: figure out why you've got nan result
        double W = sin(y * y) / asin(3 + y) + pow(3, y);
        cout << "W(y) = " << W << " при y = " << y << endl; 
        if(maximum < W) 
            maximum = W;
    }
    cout << "Максимальное значение функции W(y) = " << maximum << endl;
    return 1;
}
