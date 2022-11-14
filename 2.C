//ler numero e escrever antecessor e sucessor

#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O antecessor de %d e %d e o sucessor e %d", num, num-1, num+1);
    return 0;
}