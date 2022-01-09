#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>

using namespace std;

int main()
{
    vector<int> A(25);
    int minimum = INFINITY;
    srand(time(0));
    printf("\nСгенерированный массив случайных целых чисел A[25]:\n");
    for(int i = 0; i < A.size(); i++)
    {
        A[i] = (rand() % 100) + 1;
        if(A[i] < minimum)
            minimum = A[i];
        printf("%i \t", A[i]);
    }
    printf("\nМинимум массива A[i] = %i", minimum);
    printf("\nМассив A[25] после перестановки элементов 12 и 18:\n");
    int tmp = A[11];
    A[11] = A[17];
    A[17] = tmp;

    for(int i = 0; i < A.size(); i++)
        printf("%i \t", A[i]);
	
    return 1;
}
