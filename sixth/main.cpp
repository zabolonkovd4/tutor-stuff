#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    vector<vector<int>> b;
    b.resize(5);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 100); // случайные значения в диапазоне 1, 100

    wcout << L"Двумерный массив B[5,5] случайных чисел:" << endl << endl;
    for(int i = 0; i < b.size(); i++)
    {
        b[i].resize(5);
        for(int j = 0; j < b[0].size(); j++)
        {
            b[i][j] = distr(gen);
            cout << b[i][j] << '\t';
        }
        cout << endl;
    }

    cout << endl << endl;

    vector<int> v;
    vector<int> second_row;
    vector<int> third_row;
    for(int i = 0; i < b.size(); i++)
    {
        for(int j = 0; j < b[0].size(); j++)
        {
            if(i % 2 != 0)
                v.push_back(b[i][j]);
            if(i == 1)
                second_row.push_back(b[i][j]);
            if(i == 2)
                third_row.push_back(b[i][j]);
        }
    }

    int minimum = *min_element(v.begin(), v.end());
    wcout << L"Минимальный элемент четных строк массива B[5,5] = " << minimum << endl;

    int min_of_second_row = *min_element(second_row.begin(), second_row.end());
    vector<int>::iterator iter_min_of_second_row = min_element(second_row.begin(), second_row.end());
    int pos_min_second_row = distance(second_row.begin(), iter_min_of_second_row);
    wcout << L"Минимальный элемент второй строки массива B[5,5] = " << min_of_second_row << endl;

    int min_of_third_row = *min_element(third_row.begin(), third_row.end());
    vector<int>::iterator iter_min_of_third_row = min_element(third_row.begin(), third_row.end());
    int pos_min_third_row = distance(third_row.begin(), iter_min_of_third_row);
    wcout << L"Минимальный элемент третьей строки массива B[5,5] = " << min_of_third_row << endl;


    int tmp = b[1][pos_min_second_row];
    b[1][pos_min_second_row] = b[2][pos_min_third_row];
    b[2][pos_min_third_row] = tmp;

    wcout << L"\nДвумерный массив B[5,5] случайных чисел после перестановки по условию:" << endl << endl;
    for(int i = 0; i < b.size(); i++)
    {
        for(int j = 0; j < b[0].size(); j++)
            cout << b[i][j] << '\t';
        cout << endl;
    }

    return 1;
}
