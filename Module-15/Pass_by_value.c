#include <stdio.h>
void fun(int x)
{
    x = 20;
    printf("function ar x er address: %p\n", &x);
}
int main()
{
    int x = 10;
    // printf("%d", x);
    fun(x);
    printf("main function ar x er address: %p ", &x);
    return 0;
}