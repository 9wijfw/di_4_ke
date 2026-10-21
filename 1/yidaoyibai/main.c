#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a = 100;
    b = 0;
    //scanf("%d")
    for (int i=0;i<a;)
    {
        i += 1;
        b += i;
        //i += 1;
    }
    printf("it is %d",b);
    return 0;
}
