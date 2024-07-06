#include <stdio.h>
int acelerador(int distancia) {
    distancia = distancia - 3;
    distancia =distancia % 8;
  if(distancia == 3){
    return 1;
  } else if(distancia == 4){
    return 2;
  } else if(distancia == 5){
  return 3;
  } else {
   return 0;
  }
}
int main(void) {
    int distancia = 0;
    int resultado = 0;

  printf("\nDigite a distancia percorrida pela particula: ");
  scanf("%d", &distancia);

    resultado = acelerador(distancia);
    if (resultado == 1 || resultado == 2 || resultado == 3) 
    { printf("\nA particula atingiu o sensor [%d]", resultado);
    } else {
    printf("\nA particula nao atingiu nenhum sensor");
    }         
  return 0;
}
