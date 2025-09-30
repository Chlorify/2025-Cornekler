#include <stdio.h>
#include <stdlib.h>

float sayilar[3];
float temp;

int main()
{
    printf("1.sayi:");
    scanf("%f",&sayilar[0]);
    printf("2.sayi:");
    scanf("%f",&sayilar[1]);
    printf("3.sayi:");
    scanf("%f",&sayilar[2]);

 for(int i = 0; i < 2; i++)
    {
        for(int a = i+1; a < 3; a++)
        {
            if(sayilar[a] < sayilar[i]){
                temp = sayilar[i];
                sayilar[i] = sayilar[a];
                sayilar[a] = temp;
            }
        }
    }

    printf("\n");
    for(int i = 0; i <= 2; i++)
    {
        printf("%.2f",sayilar[i]);
        if(i == 2){break;}
        printf("<");

    }
return 0;
}
