#include <stdio.h>
// return_type fuction_name(parameter)
//{

// return
// }

int sub(int num1, int num2)
{
    int ans = num1 - num2;
    return ans;
}

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val = sum(10, 5);
    int val2 = sub(a, b);
    int val3 = sum(2, 4);
    printf("%d %d %d", val, val2, val3);

    return 0;
}