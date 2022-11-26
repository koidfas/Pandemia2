#include <stdio.h>
#include "lib.h"

// O programa vai ter vetores de cada mes de um ano especifico, que seguram informações de casos de covid
// E o programa vai ter func que pega informação de casos e faça o print das informações na tela ou calcula algo!
// O programa vai começar com um switch stat que vai selecionar as opções do prog 
//

int main(){
  char n;
  int 
  printf("Escolha uma opção:\nA)Casos Acumulados\nB)Casos Novos\nC)Obitos Acumulados\nD)Obitos Novos\n");
  scanf("%c", &n);
  switch(n){
    case 'A':
      printf("De que Mês e Dia você gostaria de ver os Casos Acumulados?");
      scanf("%d %d",);
      
      
    break;
    
    case 'B':

    break;

    case 'C':

    break;


    case 'D':

    break;
  default:
    printf("Digite um caracter válido!");
    break;
  }
  
  



  return 0;
}
