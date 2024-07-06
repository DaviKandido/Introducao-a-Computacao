def acelerador(distancia):
  # Retira distancia do emissor ao acelerador (3) Unidades
  distancia = distancia - 3
  # Retira a quantidades de voltas dadas 
  distancia = distancia % 8

  # Verifica a distancia necessaria até cada sensor
  # Retorna sensor Atingido
  if (distancia == 3):
    return 1
  elif (distancia == 4):
    return 2  
  elif (distancia == 5):
    return 3
  else:
    return 0

distancia = 0
resultado = 0

  # Entrada de dados
distancia = int(input("\nDigite a distancia percorrida pela particula: "))

  # Verificação se a distancia é valida
if (distancia >= 6 and distancia <= 800008):
    resultado = acelerador(distancia) 
else:
    print("\nDistancia invalida: ")

  # Teste de retorno de função
if (resultado == 1 or resultado == 2 or resultado == 3):
  print("\nA particula atingiu o sensor [",resultado,"]")
else:
  print("\nA particula nao atingiu nenhum sensor")