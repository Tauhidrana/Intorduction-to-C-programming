#include <stdio.h>

int main()
{
    char a[101];
    char b[101];
    scanf("%s", &a);
    scanf("%s", &b);
    int val = strcmp(a, b);
if (val<0)
{
    printf("A is smaller");
}

else if (val == 0)
{
    printf("Equal");
}
else{
    printf("B is smaller");
}
    return 0;
}