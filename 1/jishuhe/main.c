#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a = 100;
    b = 0;
    //scanf("%d")
    for (int i=1;i<=a;i += 2)
    {

        b += i;
        //printf("it is %d \n",b);
        //i += 1;
    }
    printf("it is %d",b);
    return 0;
}
