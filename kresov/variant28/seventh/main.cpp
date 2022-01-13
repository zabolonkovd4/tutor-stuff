#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>

using namespace std;
int main()
{
    vector<double> F(60);
    const int MIN = 1;
    const int MAX = 100;
    srand(time(0));
    printf("\nСгенерированный массив случайных вещественных чисел F[60]:\n");
    for(int i = 0; i < F.size(); i++)
    {
        F[i] = (double)(rand()) / ((double)(RAND_MAX / (MAX - MIN)));
        printf("%i \t", F[i]);
    }
    double tmp = F[33];
    F[33] = F[13];
    F[13] = tmp;
    
    printf("\nМассив случайных вещественных чисел F[60] после перестановки элементов F[34] и F[14]:");
    for(int i = 0; i < F.size(); i++)
        printf("%i \t", F[i]);

    return 1;
}
