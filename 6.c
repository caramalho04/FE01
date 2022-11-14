//calcular a área de um círculo
#include <stdio.h>
#include <math.h>

int main(){
    float raio, area;
    printf("Raio do circulo:\n");
    scanf("%f", &raio);
    area = M_PI * pow(raio, 2);
    printf("Area do circulo: %.2f", area);
}
