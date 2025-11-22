#include <stdio.h>

int main()
{
int tk;
scanf("%d", &tk);
if (tk >=100)
{
    printf("Burger khabo");
    
}
else if(tk >=50)
{
    printf("Fuska khabo");
}
else if (tk >=20)
{
  printf("Chips Khabo");
}

else{
    printf("Kisoi khabo na");
}

    return 0;
}