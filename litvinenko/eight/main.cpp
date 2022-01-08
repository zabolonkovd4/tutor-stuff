#include <iostream>
#include <vector>
#include "time.h"
#include <limits>

using namespace std;

int main()
{
    srand(time(0));
    int sum = 0;
    vector<vector<int>> C;
    C.resize(9);
    printf("\nЭлементы массива C[9,7]:\n");
    for(int i = 0; i < C.size(); i++)
    {
        C[i].resize(7);
        for(int j = 0; j < C[0].size(); j++)
        {
            C[i][j] = (rand() % 100) + 1;
            printf("%i \t", C[i][j]);
            if(j == 6)
                sum += C[i][j];
        }
        printf("\n");
    }
    printf("Сумма всех элементов в 7 столбце двумерного массива целых чисел C[9,7] = %i", sum);
    return 1;
}
