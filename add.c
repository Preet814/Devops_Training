#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 5;
    int b = 3;
    printf("add: %d", add(a, b));
    return 0;
}