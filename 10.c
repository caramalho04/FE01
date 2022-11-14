//salario e com aumento 

#include <stdio.h>
int main(void){
    float salario, aumento;
    printf("Digite o salario:\n");
    scanf("%f", &salario);
    aumento = salario + salario * 0.25;
    printf("Salario inicial= %.2f Salario com aumento: %.2f", salario, aumento);
}