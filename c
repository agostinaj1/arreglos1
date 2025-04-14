#include <stdio.h>

int main() {
    int num[] = {3, 56, 23, 45, 98, 12, 77, 45};
    int tamaño = sizeof(num) / sizeof(num[0]);
    int max=num[0];
    for (int i = 1; i < tamaño; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
        
    }
    printf("el numero  mas alto es: %d \n", max);
    return 0;
}
