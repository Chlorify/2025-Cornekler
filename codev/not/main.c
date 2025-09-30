#include <stdio.h>
#include <stdlib.h>

float not[4][3];
float giris = 0;
float hesap = 0;
float sonuc[4];

int main()
{
for(int i = 0;i<5;i++){
    for(int b = 0; b<4; b++){
        printf("%d. ogrenci %d notunu giriniz:", i+1, b + 1);
        scanf("%f",&giris);
        not[i][b] = giris;
        hesap = 0;
    }
        for(int b = 0; b<4; b++){
        hesap += not[i][b];
        sonuc[i] = (float) hesap/4;
    }
    printf("%.2f\n",sonuc[i]);
    if(sonuc[i]<50){
            printf("kaldi\n");
    }
    else{
        printf("gecti\n");
    }

}
printf("tamamlandi");
return 0;
}
