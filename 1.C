#include <stdio.h>

int main(){
    float a, b,c;
    float media;

    printf("Introduza nota de matematica:\n");
    scanf("%f", &a);

    printf("Introduza nota de ingles:\n");
    scanf("%f", &b);

    printf("Introduza nota de portugues:\n");
    scanf("%f", &c);

    media= (a+b+c)/3;

    printf("%.2f",media);
}