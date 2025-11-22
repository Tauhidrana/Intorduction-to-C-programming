#include <stdio.h>
void hello(int x)
{
    if (x==6)
    {
        return;
    }
    
   
    hello(x + 1);
     printf("%d\n", x);
}
int main()
{
    int x = 1;

    hello(x);
    return 0;
}
