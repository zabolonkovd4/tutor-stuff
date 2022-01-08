#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double m;
    cout << "Введите m: " << endl;
    cin >> m;

    double S = sin(sqrt(pow(m, 5)) + 3) / acos(pow(8 * m, 3));

    cout << "S = " << S << endl;

    return 1;
}

