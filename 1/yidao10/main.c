#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a;
    //printf("Hello sekai!\n");
    srand((unsigned)time(NULL));
    for (int i=0;i<10;i+=1)
    {
        a = rand()%100 + 1;
        printf("%d \n",a);
    }
    return 0;
}
/*
import random as r
a = []
for i in range(10):
    a.append(r.randint(1,100))
print(a)
*/
