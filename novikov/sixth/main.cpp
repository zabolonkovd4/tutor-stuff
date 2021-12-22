#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{
    int B[5][5];
    srand(time(0));

    cout << "Двумерный массив B[5,5] случайных чисел:" << endl << endl;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            B[i][j] = rand() % 100 + 1;
            cout << B[i][j] << '\t';
        }
        cout << endl;
    }

    vector<int> v;
    vector<int> second_row;
    vector<int> third_row;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i % 2 != 0)
                v.push_back(B[i][j]);
            if(i == 1)
                second_row.push_back(B[i][j]);
            if(i == 2)
                third_row.push_back(B[i][j]);
        }
    }

    int minimum = *min_element(v.begin(), v.end());
    cout << "Минимальный элемент четных строк массива B[5,5] = " << minimum << endl;

    int min_of_second_row = *min_element(second_row.begin(), second_row.end());
    vector<int>::iterator iter_min_of_second_row = min_element(second_row.begin(), second_row.end());
    int pos_min_second_row = distance(second_row.begin(), iter_min_of_second_row);
    cout << "Минимальный элемент второй строки массива B[5,5] = " << min_of_second_row << endl;

    int min_of_third_row = *min_element(third_row.begin(), third_row.end());
    vector<int>::iterator iter_min_of_third_row = min_element(third_row.begin(), third_row.end());
    int pos_min_third_row = distance(third_row.begin(), iter_min_of_third_row);
    cout << "Минимальный элемент третьей строки массива B[5,5] = " << min_of_third_row << endl;


    int tmp = B[1][pos_min_second_row];
    B[1][pos_min_second_row] = B[2][pos_min_third_row];
    B[2][pos_min_third_row] = tmp;

    cout << "\nДвумерный массив B[5,5] случайных чисел после перестановки по условию:" << endl << endl;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
            cout << B[i][j] << '\t';
        cout << endl;
    }

    return 1;
}
