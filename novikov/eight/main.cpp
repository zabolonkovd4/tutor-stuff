#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    double D[4][6];
    cout << "Двумерный массив D[4,6] случайных вещественных чисел:" << endl << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            D[i][j] = (double)rand() * (100. - 1.) / RAND_MAX + 1;
            cout << D[i][j] << '\t';
        }
        cout << endl;
    }


    vector<double> v;
    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 6; j++)
            v.push_back(D[i][j]);

    cout << "\nОтсортированные элементы двумерного массива D[4,6]:" << endl << endl;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << '\t';


    cout << "\n\nМассив C[5] минимальных элементов из D[4,6]:" << endl << endl;
    double C[5];
    double sum = 0;
    for(int i = 0; i < 5; i++)
    {
        C[i] = v[i];
        cout << C[i] << '\t';
        sum += pow(sin(C[i]), 2);
    }

    cout << "\n\nСумма элементов массива C[5] по формуле в условии = " << sum;

    double tmp = C[0];
    C[0] = C[4];
    C[4] = tmp;

    ofstream file("..\\result.txt");
    if(file.is_open())
    {
        cout << "\n\nМассив C[5] минимальных элементов из D[4,6] после перестановки первого и последнего элемента:" << endl << endl;
        file << "Массив C[5] минимальных элементов из D[4,6] после перестановки первого и последнего элемента:" << endl << endl;
        for(int i = 0; i < 5; i++)
        {
            cout << C[i] << '\t';
            file << C[i] << '\t';
        }
    }

    file.close();
    return 1;
}
