#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
char codigo1[10];
char cidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontos_turisticos1;
float densidade_populacional1;
float pib_per_capita1;
float super_p1;

char estado2;
char codigo2[10];
char cidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontos_turisticos2;
float densidade_populacional2;
float pib_per_capita2;
float super_p2;

int atributo1, atributo2;

float valor1_carta1, valor1_carta2;
float valor2_carta1, valor2_carta2;

float soma1, soma2;


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

// ====== MENU ATRIBUTO 1 ======

 printf("\n===== SUPER TRUNFO =====\n");
    printf("\n===== ESCOLHA O PRIMEIRO ATRIBUTO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &atributo1);

// ===== MENU ATRIBUTO 2 =====

printf("\n===== ESCOLHA O SEGUNDO ATRIBUTO =====\n");

    if(atributo1 != 1)
        printf("1 - População\n");

    if(atributo1 != 2)
        printf("2 - Área\n");

    if(atributo1 != 3)
        printf("3 - PIB\n");

    if(atributo1 != 4)
        printf("4 - Pontos Turísticos\n");

    if(atributo1 != 5)
        printf("5 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &atributo2); 
    
  // ===== IMPEDIR REPETIÇÃO =====

    if(atributo1 == atributo2) {
        printf("\nErro: atributos iguais!\n");
        return 0;
    }

  // ===== ATRIBUTO 1 =====

    switch(atributo1) {

        case 1:
            valor1_carta1 = populacao1;
            valor1_carta2 = populacao2;
            break;

        case 2:
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;

        case 3:
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;

        case 4:
            valor1_carta1 = pontos_turisticos1;
            valor1_carta2 = pontos_turisticos2;
            break;

        case 5:
            // menor densidade vence
            valor1_carta1 = 1.0 / densidade_populacional1;
            valor1_carta2 = 1.0 / densidade_populacional2;
            break;

        default:
            printf("\nOpção inválida!\n");
            return 0;
    }

   // ===== ATRIBUTO 2 =====

    switch(atributo2) {

        case 1:
            valor2_carta1 = populacao1;
            valor2_carta2 = populacao2;
            break;

        case 2:
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;

        case 3:
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;

        case 4:
            valor2_carta1 = pontos_turisticos1;
            valor2_carta2 = pontos_turisticos2;
            break;

        case 5:
            valor2_carta1 = 1.0 / densidade_populacional1;
            valor2_carta2 = 1.0 / densidade_populacional2;
            break;

        default:
            printf("\nOpção inválida!\n");
            return 0;
    }
   
   // ===== SOMA DOS ATRIBUTOS =====

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;    
    
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

    // ===== RESULTADOS =====

    printf("\n===== RESULTADO FINAL =====\n");

    printf("\nCarta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nSoma da Carta 1: %.2f\n", soma1);
    printf("Soma da Carta 2: %.2f\n", soma2);

    // ===== VENCEDOR =====

    (soma1 > soma2)
        ? printf("\nVencedor: %s\n", cidade1)

        : (soma2 > soma1)

        ? printf("\nVencedor: %s\n", cidade2)

        : printf("\nEmpate!\n");

    return 0;
}
