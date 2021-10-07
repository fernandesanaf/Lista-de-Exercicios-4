/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 06/10/2021
MATÉRIA: Construção de Algoritmos

5 - Escreva um algoritmo que leia três valores e armazene-os em três variáveis com os seguintes nomes MAIOR, MENOR e INTER

*/

#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int numero3;
    int MAIOR;
    int MENOR;
    int INTER;

    // inserção de valores
    printf("INSIRA UM NUMERO: ");
    scanf("%d", &numero1);

    printf("INSIRA UM NUMERO: ");
    scanf("%d", &numero2);

    printf("INSIRA UM NUMERO: ");
    scanf("%d", &numero3);

    // após o usuario inserir o numero, o programa fará a verificação dos valores para serem lidos nas variaveis corrertas
    if (numero1 <= numero2 & numero2 <= numero3){ //numero 3 é o maior
        MAIOR = numero3; //igualando a primeira variavel "numero" com a variavel final 
        //printf("maior %2d",MAIOR); //confirmação que o numero maior esta sendo lido corretamente
    }
    // se o numero 1 for menor que o numero 2, o numero 1 será o menor
    if (numero1 <= numero2){
        MENOR = numero1;
        //printf("menor %2d",MENOR); //confirmação que o numero menor esta sendo lido corretamente
    }
    // então o numero2 será o intermediario
    if (numero2 <= numero3) {
        INTER = numero2;
        //printf("inter %2d",INTER); //confirmação que o numero inter esta sendo lido corretamente
    }

    if(numero1 <= numero3 & numero3 <= numero2){
         MAIOR = numero2; //numero 2 é o maior
    }
    //numero 3 é o menor numero
    if (numero3 <= numero1){
        MENOR = numero3;
    }
    // numero1 é o numero intermediario
    if (numero1 <= numero2) {
        INTER = numero1;
    }

    if(numero3 <= numero2 & numero2 <= numero1){
         MAIOR = numero1; //numero 1 é o maior
    }
    //numero 2 é o menor
    if (numero2 <= numero3){
        MENOR = numero2;
    }
    // numeor 3 é o intermediario
    if (numero3 <= numero1) {
        INTER = numero3;
    }


    return 0;
}

