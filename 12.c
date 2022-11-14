//colocar o valor da variável x na variavel y

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y,a;
    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    printf("Digite o valor de y:\n");
    scanf("%d", &y);
    a=x;
    x=y;
    y=a;
    printf("O valor de x é : %d\n", x);
    printf("O valor de y é : %d\n", y);
}