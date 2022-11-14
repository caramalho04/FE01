#include <stdio.h>

int main(void){
    float a, b, c, d, e, f;
    printf("Valor de nota:\n");
    scanf("%f", &a);
    printf("Ponderacao:\n");
    scanf("%f", &d);

    printf("Valor de nota:\n");
    scanf("%f", &b);
    printf("Ponderacao:\n");
    scanf("%f", &e);

    printf("Valor de nota:\n");
    scanf("%f", &c);
    printf("Ponderacao:\n");
    scanf("%f", &f);


    float media = (a*d + b*e + c*f)/(d+e+f);

    printf("Media ponderada: %.2f", media);
}