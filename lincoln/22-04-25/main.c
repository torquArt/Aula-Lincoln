#include <stdio.h>

int main() {
    float altura;
    float peso;
    float IMC;
    
   while(1){
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);
    
    
    printf("Sua altura é de %g metros e seu peso é de %g quilos.\n", altura, peso);
    
    IMC = peso / (altura * altura);
        printf("Seu IMC = %g\n", IMC);
}
    return 0;
}
