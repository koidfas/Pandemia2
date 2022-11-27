#include <stdio.h>
#include "lib.h"

// O programa vai ter vetores de cada mes de um ano especifico, que seguram informações de casos de covid
// E o programa vai ter func que pega informação de casos e faça o print das informações na tela ou calcula algo!
// O programa vai começar com um switch stat que vai selecionar as opções do prog 
//

int main(){
  char n;
  int dia,mes;
  printf("Escolha uma opção:\nA)Casos Novos\nB)Obitos Novos\n");
  scanf("%c", &n);
  switch(n){
    case 'A':
      printf("De que Mês e Dia você gostaria de ver os Casos Acumulados?\n");
      scanf("%d %d",&mes,&dia);
      casosNovos(mes,dia);
    break;
    case 'B':
      printf("De que Mês e Dia você gostaria de ver os Casos Acumulados?\n");
      scanf("%d %d",&mes,&dia);
      obitosNovos(mes, dia);
    break;

  default:
    printf("Digite um caracter válido!");
    break;
  }
  
  return 0;
}
