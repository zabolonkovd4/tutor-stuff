#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>

using namespace std;
int main()
{
    vector<int> M(25);
    long long int result = 1;
    srand(time(0));
    printf("\nСгенерированный массив случайных целых чисел M[25]:\n");
    for(int i = 0; i < M.size(); i++)
    {
        M[i] = (rand() % 100) + 1;
        result = result * M[i];
        printf("%i \t", M[i]);
    }
    printf("\nПроизведение всех элементов массива M[25] = %lli", result);
    return 1;
}
