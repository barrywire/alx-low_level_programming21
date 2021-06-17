#include <stdio.h>

int main(void)
{
    int sizeChar, sizeInt, sizeLongInt, sizeLongLongInt, sizeFloat;

    sizeChar = sizeof(char);
    sizeInt = sizeof(int);
    sizeLongInt = sizeof(long int);
    sizeLongLongInt = sizeof(long long int);
    sizeFloat = sizeof(float);

    printf("Size of a char %d(s)\n", sizeChar);
    printf("Size of a int %d(s)\n", sizeInt);
    printf("Size of a long int %d(s)\n", sizeLongInt);
    printf("Size of a long long int %d(s)\n", sizeLongLongInt);
    printf("Size of a float %d(s)\n", sizeFloat);

    return 0;
}