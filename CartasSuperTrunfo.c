#include <stdio.h>

int main() {
  // Variáveis da Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidade1;
  float pibPerCapita1;
  float superPoder1;

  // Variáveis da Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidade2;
  float pibPerCapita2;
  float superPoder2;

  // Cadastro da Carta 1
  printf("=== Cadastro da Carta 1 ===\n");
  printf("Digite o Estado (Letra): ");
  scanf(" %c", &estado1);

  printf("Digite o Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Digite a Populacao: ");
  scanf("%lu", &populacao1);

  printf("Digite a Area (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Cálculos da Carta 1
  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

  // Cadastro da Carta 2
  printf("\n=== Cadastro da Carta 2 ===\n");
  printf("Digite o Estado (Letra): ");
  scanf(" %c", &estado2);

  printf("Digite o Codigo da Carta (ex: B02): ");
  scanf("%s", codigo2);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Digite a Populacao: ");
  scanf("%lu", &populacao2);

  printf("Digite a Area (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // Cálculos da Carta 1
  densidade2 = (float)populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);
  
  // Exibição das Carta 1
  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu habitantes\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  // Exibição das Carta 2
  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu habitantes\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  // Comparaçao das cartas e resultados
  printf("\nComparacao de Cartas:\n");
  printf("(1 = Carta 1 venceu, 0 = Carta 2 venceu)\n");

  int vitoria_c1;

  vitoria_c1 = populacao1 > populacao2;
  printf("População: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);

  vitoria_c1 = area1 > area2;
  printf("Área: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);

  vitoria_c1 = pib1 > pib2;
  printf("PIB: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);

  vitoria_c1 = pontosTuristicos1 > pontosTuristicos2;
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);

  vitoria_c1 = densidade1 < densidade2;
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);

  vitoria_c1 = pibPerCapita1 > pibPerCapita2;
  printf("PIB per Capita: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);

  vitoria_c1 = superPoder1 > superPoder2;
  printf("Super Poder: Carta %d venceu (%d)\n", (vitoria_c1 ? 1 : 2), vitoria_c1);
    
  return 0;
}