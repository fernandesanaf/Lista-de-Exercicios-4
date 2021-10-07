/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 06/10/2021
MATÉRIA: Construção de Algoritmos

2 -Escrevam um algoritmo que determine se um numero inteiro é positivo, negativo ou nulo.
*/
#include <stdio.h>

int main(){
    int numero;

    printf("digite o numero: "); //entrada de valor
    scanf("%d", &numero);
    
    if(numero == 0) { // se for = 0 é zero
        printf("numero nulo");
        }
    
    if(numero >0) { // se for maior que 0 é positivo senão é negativo
        printf("numero positivo");
        }
    
    else{
        printf("numero negativo"); 
        }

    return 0;    
}