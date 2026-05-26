#include <stdio.h>
//WJD
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Variáveis da Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  // Variáveis da Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Área para entrada de dados

  // Cadastro da Carta 1
  printf("Cadastro da Carta 1\n");

  printf("Digite o estado da carta 1: ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta 1: ");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade da carta 1: ");
  scanf("%s", nomeCidade1);

  printf("Digite a populacao da cidade da carta 1: ");
  scanf("%d", &populacao1);

  printf("Digite a area da cidade da carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade da carta 1: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos da carta 1: ");
  scanf("%d", &pontosTuristicos1);

  // Cadastro da Carta 2
  printf("\nCadastro da Carta 2\n");

  printf("Digite o estado da carta 2: ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta 2: ");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade da carta 2: ");
  scanf("%s", nomeCidade2);

  printf("Digite a populacao da cidade da carta 2: ");
  scanf("%d", &populacao2);

  printf("Digite a area da cidade da carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade da carta 2: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos da carta 2: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade

  // Exibição da Carta 1
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  // Exibição da Carta 2
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  return 0;
}
