#include <stdio.h>
int x = 10;
int sum(a, b)
{
    printf("sum -> %d\n", x);
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    
  
    printf("main -> %d\n", x);
     sum ();
    return 0;
}