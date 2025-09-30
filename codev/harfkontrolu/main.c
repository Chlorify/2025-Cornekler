#include <stdio.h>
#include <stdlib.h>
char sesliharfler[] = {'a','e','ı','i','ö','o','u','ü'}; // ö, ü gibi bazı karakterlerde sorun var.

int uzunluk = sizeof(sesliharfler);

int durum = 0;

char a = 0;
int main()
{
    printf("harf giriniz:");
    scanf("%c",&a);
    for (int i = 0; i < uzunluk; i++){
            if(a == sesliharfler[i]){
                durum = 1;
                break;
            }
            else{
                durum = 0;
            }
    }

    if(durum==1){
        printf("SesliHarf");
    }
    else{
        printf("SessizHarf");
    }
return 0;
}
