#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saat;
    printf("Kac saat calistigini giriniz:");
    scanf("%d",&saat);
    if(saat<=10)
        printf("ucret:%d",saat*5);
    else if(saat>10 && saat<20)
        printf("ucret:%d",saat*3);
    else
        printf("ucret.%d",saat*2);
    return 0;
}
