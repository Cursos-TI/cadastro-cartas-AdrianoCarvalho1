#include <stdio.h>

int main() {
  // Variáveis da Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidade1;
  float pibPerCapita1;

  // Variáveis da Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidade2;
  float pibPerCapita2;

  // Cadastro da Carta 1
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o Estado (Letra): ");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao1);

  printf("Digite a Area (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cálculos da Carta 1
  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;

  // Cadastro da Carta 2
  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Digite o Estado (Letra): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Digite a Populacao: ");
  scanf("%d", &populacao2);

  printf("Digite a Area (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhões de reais, ex: 300.50): ");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculos da Carta 1
  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
  
  // Exibição das Cartas
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d habitantes\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d habitantes\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  return 0;
}