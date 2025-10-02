#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades

  int Cidade, Carta, População, NumerodePontosTuristicos;
  float Area, PIB;
  char Estado[50], CodigodaCarta[50], NomedaCidade[50];
  

  // Área para entrada de dados
  
  printf("Carta: \n");
  scanf("%d", &Carta);

  printf("Estado: \n");
  scanf("%s", &Estado);

  printf("CodigodaCarta: \n");
  scanf("%s", &CodigodaCarta);

  printf("NomedaCidade: \n");
  scanf("%s", &NomedaCidade);

  printf("População: \n");
  scanf("%d", &População);
  
  printf("Area: \n");
  scanf("%f", &Area);
    
  printf("PIB: \n");
  scanf("%f", &PIB);
    
  printf("NumerodePontosTuristicos: \n");
  scanf("%d", &NumerodePontosTuristicos);

  // Área para exibição dos dados da cidade

printf("Carta: %d\nEstado: %s\n", Carta, Estado);
printf("CodigodaCarta: %s\nNomedaCidade: %s\n", CodigodaCarta, NomedaCidade);
printf("População: %d\nArea: %f\nPIB: %f\nNumerodePontosTuristicos: %d\n", População, Area, PIB, NumerodePontosTuristicos);



  return 0;
}
