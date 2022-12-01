#include <stdio.h>
#include "lib.h"

// Vetores com dados dos Obitos e Casos Novos para todas funções acessarem

// Obitos Novos

int jan_on[31]={49,28,76,175,129,128,181,115,44,110,147,133,174,251,175,
74,121,351,338,350,358,238,296,259,487,570,672,799,640,330,284};

int fev_on[28]={929,893,1041,493,1308,391,428,1189,1264,943,1135,896,314,
473,854,1085,1128,1127,851,406,318,816,999,971,770,753,221,199};

int mar_on[31]={297,370,578,677,672,216,198,488,669,588,470,389,133,171,336,
355,485,373,304,103,97,394,302,312,256,196,117,77,285,263,253};

int abr_on[30]={245,106,39,165,216,195,250,149,98,38,69,166,163,140,111,31,22,
66,125,263,92,51,53,36,76,144,245,114,185,87};

int mai_on[31]={16,89,92,65,137,195,35,13,53,198,126,125,139,92,46,69,229,103,
114,60,35,99,39,239,132,143,139,72,62,63,160};

int jun_on[30]={125,127,43,26,8,36,307,299,143,170,114,36,70,174,339,151,72,94,
55,96,229,140,365,334,140,36,127,316,277,291};

// Casos Novos

int jan_cn[31]={3986,1721,11850,18759,27267,35826,63292,49303,24382,
34788,70765,87471,97986,112286,48520,24934,74134,137103,204854,
168495,166539,157393,135080,83340,183722,224567,228954,269968,
179816,134175,77947};
 
int fev_cn[28]={193465, 172903, 298408,184311, 197442, 59737, 66583, 
177027, 178814, 164066, 166009, 140234, 54220, 58540, 120549, 
147734, 131049, 121027, 108725, 40625, 37339, 105776, 133563, 
93757, 91595, 73808 ,24054, 19516};

int mar_cn[31]={23545,30995,61870,69769,59253,15961,20456,68893,
54906,56635,55211,45020,18642,11287,52094,45882,
49601,45472,44154,13218,11110,41021,47376,37690,34576,
29922,10239,9923,30056,33937,31561};

int abr_cn[30]={27270,17062,7210,13361,27331,27120,26502,
30212,21229,7210,8803,22724,26924,23171,13278,
2775,2541,8470,14131,36750,18660,8068,6957,3809,
6456,22142,20943,19916,14122,15194};

int mai_cn[31]={6263,6498,21432,20072,21682,19725,14622,
6006,9709,20143,23398,21344,25609,17355,6296,13510,26386,
13525,10415,10187,16194,12613,12775,32820,9787,33910,40633,
24239,8195,24082,41377};

int jun_cn[30]={40979,41273,36189,15590,6266,35783,71045,
49614,45073,56491,27796,11728,40173,44441,70290,32934,
28672,20127,10691,50272,64362,71906,72049,60384,38793,
16679,51678,76638,75925,75139};


int casosAcumulados(){
    return 32358018;
}

int obitosAcumulados(){
    return 671416;
}

void media_movel(int mes, int dia_comeco, int dia_final,float *ptr){
  // *ptr = 100.5;
switch (mes){
  case 1:
    float soma=0,cont=0;
    for (int i = dia_comeco - 1; i < dia_final; i++) {
      soma = soma + jan_on[i];
      cont++;
    }
    *ptr = soma / cont;
    break;

  default:
    printf("Tu fez merda!");
    break;
  }
}

void obitosNovos(int mes, int dia ){
switch (mes){
  case 1:
  if (dia > 31){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Janeiro foram contabilizados %d de obitos!",jan_on[dia-1]);
    break;
  case 2:
  if (dia > 28){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Feveveiro foram contabilizados %d de casos!",fev_on[dia-1]); 
    break;
  case 3:
  if (dia > 31){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Março foram contabilizados %d de casos!",mar_on[dia-1]);
    break;
  case 4:
  if (dia > 30){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Abril foram contabilizados %d de casos!",abr_on[dia-1]);
    break;
  case 5:
  if (dia > 31){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Maio foram contabilizados %d de casos!",mai_on[dia-1]);
    break;
  case 6:
  if (dia > 30){
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
  if (dia > 31){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Janeiro foram contabilizados %d de casos!",jan_cn[dia-1]);
    break;
  case 2:
  if (dia > 28){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Fevereiro foram contabilizados %d de casos! %d",fev_cn[dia-1]);
    break;
  case 3:
  if (dia > 31){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Março foram contabilizados %d de casos!",mar_cn[dia-1]);
    break;
  case 4:
  if (dia > 30){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Abril foram contabilizados %d de casos!",abr_cn[dia-1]);
    break;
  case 5:
  if (dia > 31){
    printf("Digite um dia válido!");
    break;
  }
    printf("No mês de Maio foram contabilizados %d de casos!",mai_cn[dia-1]);
    break;
  case 6:
  if (dia > 30){
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
