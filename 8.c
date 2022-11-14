// fahrenheit celcius

#include <stdio.h>
int main(void){
    float fahrenheit, celcius;
    printf("Digite a temperatura em fahrenheit:\n");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5/9;
    printf("Temperatura em celcius: %.2f", celcius);
}
