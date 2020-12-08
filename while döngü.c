#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi;
    printf("Pozitif sayi girin:");
    scanf("%d",&sayi);
    while(sayi<0)
    {
        printf("Pozitif sayi girin:");
        scanf("%d",&sayi);


    }
    printf("Tebrikler!!");
    return 0;
}
