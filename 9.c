//euros para dolares

#include <stdio.h>
int main(void){
    float euros, dolares;
    printf("Digite a quantidade de euros:\n");
    scanf("%f", &euros);
    dolares = euros * 1.18;
    printf("Quantidade de dolares: %.2f", dolares);
}
