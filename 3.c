//desconto de 30%

#include <stdio.h>

int main(){
    float valor;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("O valor do produto com desconto de 30%% = %.2f", valor*0.7);
}