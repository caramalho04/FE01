//area do triangulo

#include <stdio.h>

int main(){
    float base, altura, area;
    printf("Base do triangulo:\n");
    scanf("%f", &base);
    printf("Altura do triangulo:\n");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("Area do triangulo: %.2f", area);
}