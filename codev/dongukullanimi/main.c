#include <stdio.h>
#include <stdlib.h>

int sayi = 0;

int main()
{
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    for(int i = 0; i<=sayi; i++){
        if(i%3 == 0){
            continue;
        }
        else if(i>=51){
            break;
        }
        printf("%d\n",i);
    }
return 0;
}
