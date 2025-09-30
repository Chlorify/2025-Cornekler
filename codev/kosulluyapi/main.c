#include <stdio.h>
#include <stdlib.h>

float a = 0;
int main()
{
    printf("sayi giriniz:");
    scanf("%f",&a);
    if(a<0){
        printf("Negatif");
    }
    else if(a>0){
        printf("Pozitif");
    }
    else{
        printf("Sifir");
    }
}
