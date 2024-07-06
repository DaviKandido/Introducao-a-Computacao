using System;

class Program {
  static int Acelerador(int distancia) {
    // Retira distancia do emissor ao acelerador (3) Unidades
    distancia = distancia - 3;
    // Retira a quantidade de voltas dadas 
    distancia = distancia % 8;

    // Verifica a distancia necessaria até cada sensor
    // Retorna sensor atingido
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

  public static void Main(string[] args) {
    // Definição de variáveis
    int distancia = 0;
    int resultado = 0;

    // Entrada de dados
    Console.Write("Digite a distancia percorrida pela particula: ");
    distancia = int.Parse(Console.ReadLine());

    // Verificação se a distancia é válida
    if (distancia >= 6 && distancia <= 800008)
      resultado = Acelerador(distancia);  // Make sure the case matches here!
    else
      Console.Write("\nDistancia invalida: ");

    // Teste de retorno de função
    if (resultado == 1 || resultado == 2 || resultado == 3) {
      Console.Write("\nA particula atingiu o sensor [" + resultado + "]");
    } else {
      Console.Write("\nA particula nao atingiu nenhum sensor");
    }
  }
}
