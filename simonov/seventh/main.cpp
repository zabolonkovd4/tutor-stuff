#include <iostream>
#include <vector>
#include <cmath>
#include <random>

using namespace std;

int main()
{
    vector<double> A(15);
    double sum = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(1., 100.); // случайные значения в диапазоне 1, 100

    for(int i = 0; i < A.size(); i++)
    {
        A[i] = distr(gen);
        cout << A[i] << '\t';
        sum += A[i];
    }
    cout << "\nSum of all numbers in array A = " << sum << endl;

    return 1;
}
