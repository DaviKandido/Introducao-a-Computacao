#include <iostream>

int acelerador(int distancia) {
  // Retira distancia do emissor ao acelerador (3) Unidades
  distancia = distancia - 3;
  // Retira a quantidades de voltas dadas 
  distancia = distancia % 8;

  // Verifica a distancia necessaria até cada sensor
  // Retorna sensor Atingido
  if (distancia == 3) {
    return 1;
  } else if (distancia == 4) {
    return 2;
  } else if (distancia == 5) {
    return 3;
  } else {
    return 0;
  }
}

int main(void) {
  // definição de variáveis
  int distancia = 0;
  int resultado = 0;

  // Entrada de dados
  std::cout << "\nDigite a distancia percorrida pela particula: ";
  std::cin >> distancia;

  //Verificação se a distancia é valida
  if (distancia >= 6 && distancia <= 800008)
    resultado = acelerador(distancia); // Chamada de função/inclusão de retorno em variavel
  else
    std::cout << "\nDistancia invalida: ";

  // Teste de retorno de função
  if (resultado == 1 || resultado == 2 || resultado == 3) {
    std::cout << "\nA particula atingiu o sensor [" << resultado << "]";
  } else {
    std::cout << "\nA particula nao atingiu nenhum sensor";
  }

  return 0;
}