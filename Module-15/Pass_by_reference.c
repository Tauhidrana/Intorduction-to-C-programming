#include <stdio.h>
void fun(int* p)
{
    *p = 20;
    // printf("function ar x er address: %p\n", &p);
}
int main()
{
    int x = 10;
    
    fun(&x);
    printf("%d", x);
    // printf("main function ar x er address: %p ", &x);
    return 0;
}