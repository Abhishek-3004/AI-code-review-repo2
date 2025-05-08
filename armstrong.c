#include <stdio.h>
int main()
{
    int n, t, sum=0, r;
    printf("Enter any number : \n");
    scanf("%d", &n);
    t = n;
    while (n != 0)
    {
        r=n%10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == t)
    {
        printf("Entered number is armstrong number.");
    }
    else
    {
        printf("Entered number is not armstrong number.");
    }
    return 0;
}
