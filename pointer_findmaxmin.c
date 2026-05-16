#include <stdio.h>
#define size 5

void find_maxmin(int array[], int *max, int *min)
{
    *max = array[0];
    *min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (*max < array[i])
        {
            *max = array[i];
        }
         if (*min > array[i])
        {
            *min = array[i];
        }
    }

}

int main(void)
{

    int number[] = {35, 12, 89, 4, 56};
    int max_value = 0, min_value = 0;

    find_maxmin(number, &max_value, &min_value);

    printf("max is %d\n", max_value);
    printf("min is %d", min_value);

    return 0;
}