/*

INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 06/10/2021
MATÉRIA: Construção de Algoritmos

1 -Escreva um algoritmo que leia os valores valorA, valorB, valorC e imprima se a soma de valorA + valorB é maior que valorC.

*/

#include <stdio.h>

int main(){
    int valorA;
    int valorB;
    int valorC;

    printf("DIGITE O VALOR A: "); //entrada de valores
    scanf("%d", &valorA);

    printf("DIGITE O VALOR B: ");
    scanf("%d", &valorB);

    printf("DIGITE O VALOR C: ");
    scanf("%d", &valorC);

    if(valorA + valorB >= valorC){ //comparação dos valores
        printf("A SOMA DOS VALORES A E B E MAIOR QUE O VALOR C");//se o valor da soma de a e b for maior que c, esta será a mensagem aparente
    }
    else {
        printf("A SOMA DOS VALORES A E B NÃO E MAIOR QUE C"); //se a soma for menor, essa será a mensagem
    }

    return 0;
}