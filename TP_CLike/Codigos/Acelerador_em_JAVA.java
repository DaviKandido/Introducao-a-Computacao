import java.util.Scanner;

public class Acelerador_em_JAVA {

  int Acelerador(int distancia) {
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
  
  public static void main(String[] args) {
    // Definição de variáveis
    int distancia = 0;
    int resultado = 0;

      Scanner entrada = new Scanner(System.in);
    // Entrada de dados
    System.out.print("Digite a distancia percorrida pela particula: ");
    distancia = entrada.nextInt();

    // Verificação se a distancia é válida
    if (distancia >= 6 && distancia <= 800008)
      resultado = new Main().Acelerador(distancia); // Chamada de função/inclusão de retorno em variavel
    else
      System.out.print("\nDistancia invalida: ");

    // Teste de retorno de função
    if (resultado == 1 || resultado == 2 || resultado == 3) {
      System.out.print("\nA particula atingiu o sensor [" + resultado + "]");
    } else {
      System.out.print("\nA particula nao atingiu nenhum sensor");
    }
  entrada.close();
  }
}

  // @Test
