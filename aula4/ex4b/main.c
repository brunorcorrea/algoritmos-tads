#include <stdio.h>
#include <stdlib.h>

int fatorial(int num)
{
    if((num == 0) || (num == 1)) return 1;
    else return num * fatorial(num - 1);
}

int main()
{
    int n, s, c;
    scanf("%d", &n);
    scanf("%d", &s);
    c = fatorial(n) / (fatorial(s) * fatorial(n - s));
    printf("%d\n", c);
}