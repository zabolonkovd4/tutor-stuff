#include <iostream>
#include <vector>
#include "time.h"
#include <cmath>
#include <limits>

using namespace std;

int main()
{
    srand(time(0));
    int sum = 0;
    vector<vector<int>> C;
    C.resize(15);
    printf("\nЭлементы двумерного массива целых чисел C[15,15]:\n");
    for(int i = 0; i < C.size(); i++)
    {
        C[i].resize(15);
        for(int j = 0; j < C[0].size(); j++)
        {
            C[i][j] = (rand() % 100) + 1;
            printf("%i  ", C[i][j]);
            if(i == 4)
                sum += C[i][j];
        }
        printf("\n");
    }
    printf("Сумма всех элементов в 5 строкое двумерного массива целых чисел С[15,15] = %i", sum);
    return 1;
}
