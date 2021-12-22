#include <iostream>
#include <cmath>
#include <vector>
#include <time.h>
#include <algorithm>
#include <tuple>

using namespace std;

int main()
{
    int C[8][8];
    srand(time(0));
    vector<tuple<int, int, int>> vt;
    cout << "Матрица (8 х 8) случайных чисел:" << endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            C[i][j] = rand() % 100 + 1;
            cout << C[i][j] << '\t';
            if(i > j)
            {
                tuple<int, int, int> t = make_tuple(C[i][j], i + 1, j + 1);
                vt.push_back(t);
            }
        }
        cout << endl;
    }
    cout << endl;

    vector<int> v;
    for(int i = 0; i < vt.size(); i++)
        v.push_back(get<0>(vt[i]));

    int min_elem = *min_element(v.begin(), v.end());
    vector<int>::iterator it = std::min_element(v.begin(), v.end());
    int iter = distance(v.begin(), it);
    int m_i = get<1>(vt[iter]);
    int m_j = get<2>(vt[iter]);
    cout << "\nМинимальный элемент ниже главной диагонали = " << min_elem << endl;

    cout << "Меняю элемент С(4,2) = " << C[1][3] << " c элементом С(" << m_j << ',' << m_i << ") = " << C[m_i - 1][m_j - 1] << endl;
    int tmp = C[1][3];
    C[1][3] = C[m_i - 1][m_j - 1];
    C[m_i - 1][m_j - 1] = tmp;

    cout << "Матрица (8 х 8) после смены минимального элемента ниже главной диагонали и С42:" << endl;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
            cout << C[i][j] << '\t';
        cout << endl;
    }
    return 1;
}
