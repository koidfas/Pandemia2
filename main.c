// Bibs básicas
#include <stdio.h>
#include "lib.h"

int main(){
  // Another switch statement!
  // Vars que vão ser usadas durante o switch
  // O switch aqui é basicamente um sistema de menus!
  char n;
  float media=0;
  int dia,mes, dia_comeco, dia_final;
  printf("Escolha uma opção:\nA)Casos Novos\nB)Obitos Novos\nC)Casos Acumulados(Dentre dos 6 meses)\nD)Obitos Acumulados(Dentro dos 6 meses)\nE)Média Móvel\n");
  scanf("%c", &n);
  switch(n){
    case 'A':
    // O algoritmo guia o usuario para digitar as informações nas var
      printf("De que Mês e Dia você gostaria de ver os Casos Novos?(Mês em forma de número!)\n");
      scanf("%d %d",&mes,&dia);
      casosNovos(mes,dia);
    break;
    case 'B':
    // O algoritmo guia o usuario para digitar as informações nas var
      printf("De que Mês e Dia você gostaria de ver os Obitos Novos?(Mês em forma de número!)\n");
      scanf("%d %d",&mes,&dia);
      obitosNovos(mes, dia);
    break;
    case 'C':
    // O algoritmo apenas da print nos return
      printf("Dentro desses 6 meses teve  %d Casos!", casosAcumulados());
    break;
    case 'D':
    // O algoritmo apenas da print nos return
        printf("Dentro desses 6 meses teve %d casos!", obitosAcumulados());
    break;
    case 'E':
    // De novo, apenas guindando o usuario para digitar as informações 
    printf("De que mês você gostaria de calcular a média móvel?\n");
    scanf("%d", &mes);
    
    printf("Qual o primeiro dia do intevalo da média?\n");
    scanf("%d", &dia_comeco);
    
    printf("Qual o último dia do intervalo da média?\n");
    scanf("%d", &dia_final);

    // No final apenas da print na var manipulda pelos ponteiros (media)
    media_movel(mes, dia_comeco, dia_final, &media);
    printf("Media Movel: %.2f", media);
    break;
  default:
    printf("Digite um caracter válido!");
    break;
  }
  return 0;
}
