#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int a,b,c,d,e;
    srand((unsigned)time(NULL));
    for (int i=0;i<10;i += 1)
    {
        a = rand()%100;
        b = rand()%100;
        c = a+b;
        printf("%d + %d 请输入你的结果",a,b);
        scanf("%d",&d);
        if (c == d)
        {
            printf("right\n");
            e += 10；
        }
        else
        {
            printf("wrong,key is %d\n",e)；
            e += 0；

        }
    }
    printf("答对了%d题目",e/10);
}
