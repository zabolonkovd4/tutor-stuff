#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int A[6][8];
    srand(time(0));
    cout << "Двумерный массив A[6,8] случайных чисел:" << endl << endl;
    int sum = 0;
    int max_elem = 0;
    int row_max_elem, col_max_elem;
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            A[i][j] = rand() % 201 + (-100);
            cout << A[i][j] << '\t';
            if(A[i][j] > 0)
                sum += A[i][j];

            if(A[i][j] > max_elem)
            {
                max_elem = A[i][j];
                row_max_elem = i;
                col_max_elem = j;
            }
        }
        cout << endl;
    }

    cout << "\n\nСумма положительных элементов массива A[6,8] S = " << sum << endl;
    cout << "Максимальный элемент массива = " << max_elem << endl << endl;
    cout << "Двумерный массив A[6,8] после замены максимального элемента на сумму всех элементов: " << endl << endl;

    A[row_max_elem][col_max_elem] = sum;
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 8; j++)
            cout << A[i][j] << '\t';
        cout << endl;
    }
    return 1;
}
