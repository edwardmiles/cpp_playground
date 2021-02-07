//
// Created by Thavarshan Thayananthajothy on 2021-01-13.
//
#include <iostream>

using namespace std;


void conditionalPrint(int valX, int valY)
{
    valX > valY ? printf("Condition is true\n") : printf("Condition is false\n");
}

void iterateAndPrint(int arrVal[5])
{
    int i = 0;

    do
    {
        if (i == 2)
        {
            ++i;
            continue;
        }

        printf("Element %d is %d\n", i, arrVal[i]);
        ++i;
    } while (i < 5);
}

int main()
{
    conditionalPrint(42, 72);

    int array[] = {1, 2, 3, 4, 5};
    iterateAndPrint(array);

    return 0;
}
