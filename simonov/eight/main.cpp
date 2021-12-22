#include <iostream>
#include <vector>
#include <random>
#include <limits>

using namespace std;

int main()
{
    vector<vector<int>> B;
    int minimum = std::numeric_limits<int>::max();

    pair<int, int> position = make_pair(0,0);
    B.resize(8);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 1000); // случайные значения в диапазоне 1, 100

    cout << "B[8,8] elements:" << endl << endl;
    for(int i = 0; i < B.size(); i++)
    {
        B[i].resize(8);
        for(int j = 0; j < B[0].size(); j++)
        {
            B[i][j] = distr(gen);
            cout << B[i][j] << '\t';

            if(B[i][j] < minimum)
            {
                minimum = B[i][j];
                position = make_pair(i, j);
            }
        }
        cout << endl;
    }

    cout << "Minimum of B[8,8] elements = " << minimum << endl;
    cout << "Position of minimum (row, col) = (" << position.first + 1 << ", " << position.second + 1<< ")" << endl;

    return 1;
}
