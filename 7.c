//horas para segundos 
#include <stdio.h>
int main(void){
    int horas, minutos, segundos;
    printf("Digite as horas:\n");
    scanf("%d", &horas);
    printf("Digite os minutos:\n");
    scanf("%d", &minutos);
    printf("Digite os segundos:\n");
    scanf("%d", &segundos);
    int total = horas*3600 + minutos*60 + segundos;
    printf("Total de segundos: %d", total);
}