/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 06/10/2021
MATÉRIA: Construção de Algoritmos

3- Escreva um algoritmo que leia dois números e efetue a adição deles. Caso o resultado seja maior do que 10 o resultado deve ser apresentado somando a ele 8.
Se o valor somado for menor ou igual a 10, o resultado deve ser apresentado subtraindo 5.

*/
#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int resultado;

    printf("INSIRA O PRIMERIRO NUMERO: "); //inserção de valores 
    scanf("%d", &numero1);
    printf("INSIRA O SEGUNDO NUMERO: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2; //operação necessaria 

    if(resultado > 10){ //se o resultado for maior que 10, é adicionado + 8 unidades
      resultado += 8; 
      //AO INVES DE USAR RESULTADO = RESULTADO + 8; UTILIZO O += PARA ENCURTAR A OPERAÇÃO

      printf("RESULTADO: %2d", resultado);
    }
    else {
      resultado -= 5; //se o resultado for menor que 10, é subitraido -5
      //AO INVES DE USAR RESULTADO = RESULTADO - 5; UTILIZO O -= PARA ENCURTAR A OPERAÇÃO

      printf("RESULTADO: %2d", resultado);
    }

    return 0;
}