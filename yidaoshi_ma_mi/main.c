#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[10],mx,mn;
    //printf("Hello sekai!\n");
    srand((unsigned)time(NULL));
    for (int i=0;i<10;i+=1)
    {
        a[i] = rand()%100 + 1;
        printf("%d \n",a[i]);
    }
    mx = mn = a[0];
    for (int i =0; i<10; i+=1)
    {
        if (a[i] > mx) mx = a[i];
        if (a[i] < mn) mn = a[i];
    }
    printf("max = %d min = %d \n",mx,mn);
    return 0;
}




/*
import random as r
a = []
for i in range(10):
    a.append(int(r.randint(1,100)))
print(a)
print(max(a))
print(min(a))
*/
