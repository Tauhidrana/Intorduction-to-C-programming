#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 400)
    {
        printf("We eat kacchi at Kacchi vai\n");

        if (tk >= 600)
        {
            printf("We eat rejala with kacchi\n");
        }
        else
        {
            printf("and only Kacchi\n");
        }

       
    }
     else{
            printf("Kisoi khabo na");
        }
    return 0;
}