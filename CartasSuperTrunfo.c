#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int carta1;
char estado1;
char codigo1[4];
char cidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidade_populacional1;
float pib_per_capita1;
float super_p1;

int carta2;
char estado2;
char codigo2[4];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_populacional2;
float pib_per_capita2;
float super_p2;

int opcao;

  // Área para entrada de dados
printf("Carta 1: \n");
printf("Digite o estado da carta (ex: A,B,C,até H): \n");
scanf(" %c", &estado1);
printf("Digite o codigo da carta (ex: A1,B1..etc..): \n");
scanf("%s", codigo1);
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", cidade1);
printf("Digite o número de habitantes da cidade: \n");
scanf("%lu", &populacao1);
printf("Digite a área da cidade em km²: \n");
scanf("%f", &area1);
printf("Digite o PIB da cidade (em bilhoes): \n");
scanf("%f", &pib1);
printf("Digite o número de pontos turisticos da cidade: \n");
scanf("%d", &pontos_turisticos1);

printf("\nCarta 2:\n");
printf("Digite o estado da carta (ex: A,B,C,até H): \n");
scanf(" %c", &estado2);
printf("Digite o codigo da carta (ex:A1,B2..etc..): \n");
scanf("%s", codigo2);
printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", cidade2);
printf("Digite o número de habitantes da cidade: \n");
scanf("%lu", &populacao2);
printf("Digite a área da cidade em km²: \n");
scanf("%f", &area2);
printf("Digite o PIB da cidade (em bilhoes): \n");
scanf("%f", &pib2);
printf("Digite o número de pontos turisticos da cidade: \n");
scanf("%d", &pontos_turisticos2);

 // Área de Calculos 
densidade_populacional1 = populacao1 / area1;
pib_per_capita1 = (pib1 * 1000000000)/ populacao1;

densidade_populacional2 = populacao2 / area2;
pib_per_capita2 = (pib2 * 1000000000)/ populacao2;

super_p1 = (float)populacao1 + area1 + pib1 +
           pontos_turisticos1 + pib_per_capita1 +
           (1.0 / densidade_populacional1);

super_p2 = (float)populacao2 + area2 + pib2 +
           pontos_turisticos2 + pib_per_capita2 +
           (1.0 / densidade_populacional2);

// ====== MENU ======

 printf("\n===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &opcao);

// ====== COMPARAÇÂO ======

 switch(opcao) {

        case 1:

            printf("\n=== COMPARAÇÃO POR POPULAÇÃO ===\n");

            printf("%s: %lu habitantes\n",
                   cidade1, populacao1);

            printf("%s: %lu habitantes\n",
                   cidade2, populacao2);

            if(populacao1 > populacao2) {
                printf("\nVencedor: %s\n", cidade1);
            }
            else if(populacao2 > populacao1) {
                printf("\nVencedor: %s\n", cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }

            break;

        case 2:

            printf("\n=== COMPARAÇÃO POR ÁREA ===\n");

            printf("%s: %.2f km²\n",
                   cidade1, area1);

            printf("%s: %.2f km²\n",
                   cidade2, area2);

            if(area1 > area2) {
                printf("\nVencedor: %s\n", cidade1);
            }
            else if(area2 > area1) {
                printf("\nVencedor: %s\n", cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }

            break;

        case 3:

            printf("\n=== COMPARAÇÃO POR PIB ===\n");

            printf("%s: %.2f bilhões\n",
                   cidade1, pib1);

            printf("%s: %.2f bilhões\n",
                   cidade2, pib2);

            if(pib1 > pib2) {
                printf("\nVencedor: %s\n", cidade1);
            }
            else if(pib2 > pib1) {
                printf("\nVencedor: %s\n", cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }

            break;

        case 4:

            printf("\n=== COMPARAÇÃO POR PONTOS TURÍSTICOS ===\n");

            printf("%s: %d pontos turísticos\n",
                   cidade1, pontos_turisticos1);

            printf("%s: %d pontos turísticos\n",
                   cidade2, pontos_turisticos2);

            if(pontos_turisticos1 > pontos_turisticos2) {
                printf("\nVencedor: %s\n", cidade1);
            }
            else if(pontos_turisticos2 > pontos_turisticos1) {
                printf("\nVencedor: %s\n", cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }

            break;

        case 5:

            printf("\n=== COMPARAÇÃO POR DENSIDADE DEMOGRÁFICA ===\n");

            printf("%s: %.2f hab/km²\n",
                   cidade1, densidade_populacional1);

            printf("%s: %.2f hab/km²\n",
                   cidade2, densidade_populacional2);

            // MENOR densidade vence

            if(densidade_populacional1 < densidade_populacional2) {
                printf("\nVencedor: %s\n", cidade1);
            }
            else if(densidade_populacional2 < densidade_populacional1) {
                printf("\nVencedor: %s\n", cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }

            break;

        default:

            printf("\nOpção inválida!\n");
    }

// Área para exibição dos dados da cidade
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d \n", pontos_turisticos1);
printf("Densidade Populacional:%.2f hab/km²\n", densidade_populacional1);
printf("PIB per Capita:%.2f reais\n", pib_per_capita1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
printf("Densidade Populacional:%.2f hab/km²\n", densidade_populacional2);
printf("PIB per Capita:%.2f reais\n", pib_per_capita2);

  // Área para comparações
int r_populacao = populacao1 > populacao2;
int r_area = area1 > area2;
int r_pib = pib1 > pib2;
int r_pont_turis = pontos_turisticos1 > pontos_turisticos2;
int r_densidade = densidade_populacional1 < densidade_populacional2; // menor vence
int r_pib_pc = pib_per_capita1 > pib_per_capita2;
int r_super = super_p1 > super_p2;

  // Resultado Vencedor
printf("\nComparação de Cartas:\n");
printf("População: Carta %d venceu (%d)\n", r_populacao ? 1 : 2, r_populacao);
printf("Área: Carta %d venceu (%d)\n", r_area ? 1 : 2, r_area);
printf("PIB: Carta %d venceu (%d)\n", r_pib ? 1 :2, r_pib);
printf("Pontos Turísticos: Carta %d venceu (%d)\n", r_pont_turis ? 1 : 2, r_pont_turis);
printf("Densidade Populacional: Carta %d venceu (%d)\n", r_densidade ? 1: 2, r_densidade);
printf("PIB per capita: Carta %d venceu (%d)\n", r_pib_pc ? 1 : 2, r_pib_pc);
printf("Super Poder: Carta %d venceu (%d)\n", r_super ? 1 : 2, r_super);

// Resultado comparação de cartas por atributos
printf("\nComparação de cartas (Atributo: População):\n\n");

printf("Carta 1 - %s (%c): %lu habitantes\n",
       cidade1, estado1, populacao1);

printf("Carta 2 - %s (%c): %lu habitantes\n",
       cidade2, estado2, populacao2);

if (populacao1 > populacao2) {
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
}
else {
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
}

return 0;
} 
