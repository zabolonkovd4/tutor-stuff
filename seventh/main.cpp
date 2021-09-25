#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include <algorithm>
#include <tuple>

using namespace std;

int main()
{
    vector<vector<int>> m;
    m.resize(8);
    std::random_device rd;
    std::mt19937 gen(rd());

    // Инициализация матрицы случайными числами
    vector<tuple<int, int, int>> vt;
    cout << "Матрица (8 х 8) случайных чисел:" << endl;
    for(int i = 0; i < m.size(); i++)
    {
        m[i].resize(8);
        for(int j = 0; j < m.size(); j++)
        {
            std::uniform_int_distribution<> distr(1, 100); // случайные значения в диапазоне 1, 100
            m[i][j] = (int)distr(gen);
            cout << m[i][j] << '\t';
            if(i > j)
            {
                tuple<int, int, int> t = make_tuple(m[i][j], i + 1, j + 1);
                vt.push_back(t);
            }
        }
        cout << endl;
    }
    cout << endl;

    // Сохраняю элементы ниже главной диагонали
    vector<int> v;
    for(int i = 0; i < vt.size(); i++)
    {
        v.push_back(get<0>(vt[i]));
        cout << get<0>(vt[i]) << " ";
    }

    // Поиск минимального элемента ниже главной диагонали
    int min_elem = *min_element(v.begin(), v.end());
    vector<int>::iterator it = std::min_element(v.begin(), v.end());
    int index = distance(v.begin(), it);
    int m_i = get<1>(vt[index]);
    int m_j = get<2>(vt[index]);
    cout << "\nMin элемент: " << min_elem << endl;
    cout << m_i << '\t' << m_j << endl;

    cout <<"Меняю элемент С(4,2) = " << m[1][3] << " c элементом С(" << m_j << ',' << m_i << ") = ..." << m[m_j][m_i] << endl;
    int tmp = m[1][3];
    m[1][3] = m[m_j][m_i];
    m[m_j][m_i] = tmp;

    cout << "Матрица (8 х 8) после смены минимального элемента ниже главной диагонали и С42:";
    for(int i = 0; i < m.size(); i++)
    {
        for(int j = 0; j < m.size(); j++)
        {
            cout << m[i][j] << '\t';
        }
        cout << endl;
    }
    return 1;
}
