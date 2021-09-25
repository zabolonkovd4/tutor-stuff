#include <iostream>
#include <vector>
#include <fstream>
#include <random>
#include <wchar.h>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    vector<vector<double>> d;
    d.resize(4);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distr(1., 100.); // случайные значения в диапазоне 1, 100

    wcout << L"Двумерный массив D[4,6] случайных вещественных чисел:" << endl << endl;
    for(int i = 0; i < d.size(); i++)
    {
        d[i].resize(6);
        for(int j = 0; j < d[0].size(); j++)
        {
            d[i][j] = distr(gen);
            cout << d[i][j] << '\t';
        }
        cout << endl;
    }


    vector<double> v;
    for(int i = 0; i < d.size(); i++)
        for(int j = 0; j < d[0].size(); j++)
            v.push_back(d[i][j]);

    wcout << L"\nОтсортированные элементы двумерного массива D[4,6]:" << endl << endl;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << '\t';


    wcout << L"\n\nМассив C[5] минимальных элементов из D[4,6]:" << endl << endl;
    vector<double> c;
    double sum = 0;
    for(int i = 0; i < 5; i++)
    {
        c.push_back(v[i]);
        cout << c[i] << '\t';
        sum += pow(sin(c[i]), 2);
    }

    wcout << L"\n\nСумма элементов массива C[5] по формуле в условии = " << sum;

    return 1;
}
