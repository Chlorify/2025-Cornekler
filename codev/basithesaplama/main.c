#include <stdio.h>
#include <stdlib.h>

float a = 0;
float b = 0;
float c = 0;
int main()
{
    printf("birinci sayi a:");
    scanf("%f",&a);
    printf("ikinci sayi b:");
    scanf("%f",&b);
    printf("birinci sayi a :%.3f ikinci sayi b :%.3f \n", a, b);
    c = (float) a + b;
    printf("a+b:%.3f \n",c);
    c = (float) a - b;
    printf("a-b:%.3f \n",c);
    c = (float) a * b;
    printf("a*b:%.3f \n",c);
    c = (float) a / b;
    printf("a/b:%.3f \n",c);
    printf("tamamlandi");
    return 0;
}
