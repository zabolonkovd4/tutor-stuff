#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    vector<vector<int>> a;
    a.resize(6);

    for(int i = 0; i < a.size(); i++)
        a[i].resize(8);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(-100, 100); // случайные значения в диапазоне 100, 100

    wcout << L"Двумерный массив A[6,8] случайных чисел:" << endl << endl;
    int sum = 0;
    int max_elem = a[0][0];
    int row_max_elem, col_max_elem;
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a[0].size(); j++)
        {
            a[i][j] = distr(gen);
            cout << a[i][j] << '\t';
            if(a[i][j] > 0)
            {
                sum += a[i][j];
            }

            if(a[i][j] > max_elem)
            {
                max_elem = a[i][j];
                row_max_elem = i;
                col_max_elem = j;
            }
        }
        cout << endl;
    }

    wcout << L"\n\nСумма положительных элементов массива A[6,8] S = " << sum << endl;
    wcout << L"\nМаксимальный элемент массива = " << max_elem << endl;
    wcout << L"Номер строки максимального элемента = " << row_max_elem + 1 << endl;
    wcout << L"Номер столбца максимального элемента = " << col_max_elem + 1<< endl;

    return 1;
}
