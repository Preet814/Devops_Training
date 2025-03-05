#include <stdio.h>
int subtract(int a, int b)
{
    return a - b;
}
int main()
{
    int a = 5;
    int b = 3;
    printf("subtract: %d", subtract(a, b));
    return 0;
}