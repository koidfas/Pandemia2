#include <stdio.h>
#include "lib.h"
#include "db.h"

// Esses duas funções basicamente só retornam um valora.
int casosAcumulados(){
    return 32358018;
}

int obitosAcumulados(){
    return 671416;
}

// Oh man, I love switch statements!
// A lógica do switch statement segue a mesma em todos as funções, o usuario digita um mês (em forma numerica)
// e cai numa posição do switch
// Deveria ter sigo outra lógica pra não ter que criar tantos switchs, mas pelo menos funciona

void media_movel(int mes, int dia_comeco, int dia_final,float *ptr){
float soma=0,cont=0;
switch (mes){
  // Para o algoritmo fazer a média móvel, ele pega o dia do começo do intervalo (que usuario digitou)
  // subtrai por 1 para ficar igual a contagem dos vetores e compara com o dia final do intervalo
  // Depois o algoritmo usa a var soma para calcular a soma entre um valor dentro do vetor mais o valor existente
  // e o cont é apenas um contador para depois dividir essa soma para fazer a média.
  // No final do algoritmo, o valor do ponteiro fica como a soma dividido pelo o cont e que altera o valor da var "média" no main.   
  case 1:
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + jan_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;
  case 2:
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + fev_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;

  case 3:
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + mar_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;  

  case 4:
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + abr_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;  

  case 5:
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + mai_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;  

  case 6:
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + jun_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;
  default:
    printf("Digite um mês válido");
    break;
  }
}

void obitosNovos(int mes, int dia ){
switch (mes){
  // Primeiro o algoritmo checa se o valor de dia ultrapassa o dia limite de um mês ou se é menor ou igual a 0
  // Depois de ter passado o if statement o algoritmo faz o print do valor dentro do vetor sendo que a var do dia é
  // subtraída para ficar na contagem dos vetores
  // essa lógica se aplica na função de casosNovos.  
  case 1:
  if (dia > 31 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Janeiro foram contabilizados %d de obitos!",jan_on[dia-1]);
    break;
  case 2:
  if (dia > 28 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Feveveiro foram contabilizados %d de casos!",fev_on[dia-1]); 
    break;
  case 3:
  if (dia > 31 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Março foram contabilizados %d de casos!",mar_on[dia-1]);
    break;
  case 4:
  if (dia > 30 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Abril foram contabilizados %d de casos!",abr_on[dia-1]);
    break;
  case 5:
  if (dia > 31 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Maio foram contabilizados %d de casos!",mai_on[dia-1]);
    break;
  case 6:
  if (dia > 30 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Junho foram contabilizados %d de casos!",jun_on[dia-1]);
    break;
  default:
    printf("Mes invalido!");
    break;
  }
  
}

void casosNovos(int mes, int dia ){
switch (mes){
  case 1:
  if (dia > 31 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Janeiro foram contabilizados %d de casos!",jan_cn[dia-1]);
    break;
  case 2:
  if (dia > 28 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Fevereiro foram contabilizados %d de casos! %d",fev_cn[dia-1]);
    break;
  case 3:
  if (dia > 31 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Março foram contabilizados %d de casos!",mar_cn[dia-1]);
    break;
  case 4:
  if (dia > 30 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Abril foram contabilizados %d de casos!",abr_cn[dia-1]);
    break;
  case 5:
  if (dia > 31 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Maio foram contabilizados %d de casos!",mai_cn[dia-1]);
    break;
  case 6:
  if (dia > 30 || dia <= 0){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Junho foram contabilizados %d de casos!",jun_cn[dia-1]);
    break;
  default:
    printf("Mes invalido!");
    break;
  }
}
