#include <stdio.h>
int main()
{
    int n,q r, sum= 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &n);

    q= n;

    while (q != 0)
    {
        r= q%10;
        sum += r*r*r;
        q /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

    return 0;
}
