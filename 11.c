#include <stdio.h> 

int main(){
    float  salario, gratificacao, imposto;
    printf("Digite o salario:\n");
    scanf("%f", &salario);
    gratificacao = salario * 0.05;
    imposto = salario * 0.07;

    printf("Salario inicial= %.2f.\nSalario com aumento: %.2f.\nImposto a pagar: %.2f", salario, salario + gratificacao, imposto);

}