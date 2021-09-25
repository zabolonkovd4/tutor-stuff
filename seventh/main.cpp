#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int>> m;
    m.resize(8);
    std::random_device rd;
    std::mt19937 gen(rd());

    // Инициализация матрицы случайными числами
    cout << "Матрица (8 х 8) случайных чисел:" << endl;
    for(int i = 0; i < m.size(); i++)
    {
        m[i].resize(8);
        for(int j = 0; j < m.size(); j++)
        {
            std::uniform_int_distribution<> distr(1, 100); // случайные значения в диапазоне 1, 100
            m[i][j] = (int)distr(gen);
            cout << m[i][j] << '\t';
        }
        cout << endl;
    }

    cout << endl;
    // Поиск минимального элемента ниже главной диагонали
    vector<int> v;
    cout << "Элементы ниже главной диагонали:";
    for(int i = 0; i < m.size(); i++)
    {
        for(int j = 0; j < m.size(); j++)
        {
            if(i > j)
            {
                v.push_back(m[i][j]);
                cout << m[i][j] << '\t';
            }
        }
        cout << endl;
    }

    int result = *min_element(v.begin(), v.end());
    cout << "Min элемент: " << result << endl;

    return 1;
}
