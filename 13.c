//hipotenusa 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a,b,c;
    printf("Digite o valor do cateto a:\n");
    scanf("%f", &a);
    printf("Digite o valor do cateto b:\n");
    scanf("%f", &b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("O valor da hipotenusa é : %.2f\n", c);

}