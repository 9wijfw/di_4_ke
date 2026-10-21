#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b = 0,c = 1;
    a = 100;
    while(c<=a)
    {
        b += c;
        c += 2;
    }
    printf("%d",b);
}
