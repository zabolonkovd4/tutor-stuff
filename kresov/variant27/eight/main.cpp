#include <iostream>
#include <vector>
#include "time.h"
#include <cmath>
#include <limits>

using namespace std;

int main()
{
    srand(time(0));
    int minimum = INFINITY;
    vector<vector<int>> P;
    P.resize(5);
    printf("\nЭлементы двумерного массива целых чисел P[5,5]:\n");
    for(int i = 0; i < P.size(); i++)
    {
        P[i].resize(5);
        for(int j = 0; j < P[0].size(); j++)
        {
            P[i][j] = (rand() % 100) + 1;
            printf("%i \t", P[i][j]);
            if(i == 3 && minimum > P[i][j])
                minimum = P[i][j];
        }
        printf("\n");
    }
    printf("Минимальный элемент в предпоследней строке двумерного массива целых чисел P[5,5] = %i", minimum);
    return 1;
}
