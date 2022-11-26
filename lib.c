#include <stdio.h>
#include "lib.h"
int jan[31]={3986,1721,11850,18759,27267,35826,63292,49303,24382,34788,70765,87471,97986,112286,48520,};

void Hello(){
  printf("Hello, World!");

}

void casosNovos(int mes, int dia ){
  switch (mes)
  {
  case 1:
    for (int i = 0; i < dia; i++)
    {
      int a = i + 1;
      if (a == dia)
      {
        printf("Casos Novos: %d",jan[i]);
      }
      
    }
    break;
  
  default:
    printf("Mes invalido!");
    break;
  }


}


