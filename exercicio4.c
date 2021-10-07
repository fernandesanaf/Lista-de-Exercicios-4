/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 06/10/2021
MATÉRIA: Construção de Algoritmos

4 - Escreva um algoritmo que encontre o dobro de um número se ele for positivo e o triplo caso seja negativo.

*/
#include <stdio.h>

int main(){
    int numero;

    printf("digite o numero: ");//inserção de valores
    scanf("%d", &numero);//leu
    
    
    if(numero >0) { 
        numero *=2; // se o numero for positivo será multiplicado por 2
        printf("numero positivo: %2d", numero);
        }
    
    else{
        numero *=3; // se o numero for negativo será multiplicado por 3
        printf("numero negativo: %2d", numero); 
        }

    return 0;    
}