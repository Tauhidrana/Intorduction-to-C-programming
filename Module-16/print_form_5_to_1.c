#include <stdio.h>
void hello(int x)
{
    if (x==0) //end condition
    {
        return;
    }
    
    printf("%d\n", x);
    hello(x - 1); //increment/decrement
}
int main()
{
    int x = 5; //initializatio/staring

    hello(x);
    return 0;
}
// for(int i = 1; i<=5;i++)
// for(int i =5; i>0; i--);