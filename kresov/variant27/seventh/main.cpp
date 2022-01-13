#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>

using namespace std;
int main()
{
    // TODO: smth wrong with calculation
    vector<double> M(24);
    M[0] = (rand() % 100) + 1;
    double result = M[0];
    srand(time(0));
    printf("\nСгенерированный массив случайных целых чисел M[25]:\n");
    for(int i = 0; i < M.size(); i++)
    {
        M[i] = (rand() % 100) + 1;
        printf("%i \t", M[i]);
        if(i == 0) continue;
        result *= M[i];
    }
    printf("\nПроизведение всех элементов массива M[i] = %f", result);
    return 1;
}
