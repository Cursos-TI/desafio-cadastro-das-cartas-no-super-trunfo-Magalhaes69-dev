#include <stdio.h>

// Desafio Super Trunfo - Comparando Cartas.
int main(){
    // Declaração de variáveis.
    char estado01, estado02;
    char codigo_carta01[4], codigo_carta02[4];
    char nome_cidade01[20], nome_cidade02[20];
    int populacao01, populacao02;
    int pontos_turisticos01, pontos_turisticos02;
    float area01, area02, densidade_populacional01, densidade_populacional02;
    float pib01, pib02, pib_per_capta01, pib_per_capta02;

    // Entrada de dados da cidade 1.
    printf("Informe o código do estado 1: ");
    scanf(" %c", &estado01);
    
    while((getchar()) != '\n');

    printf("Informe o código da carta 1: ");
    scanf("%s", &codigo_carta01);
    
    printf("Informe o nome da cidade 1: ");
    scanf("%s", &nome_cidade01);

    printf("Informe a população da cidade 1: ");
    scanf("%d", &populacao01);

    printf("Informe quantos pontos turísticos tem a cidade 1: ");
    scanf("%d", &pontos_turisticos01);

    printf("Informe a área urbana da cidade 1: ");
    scanf("%f", &area01);

    printf("Informe o PIB da cidade 1: ");
    scanf("%f", &pib01);

    // Processamento dos dados da cidade 1.
    densidade_populacional01 = populacao01 / area01;
    pib_per_capta01 = pib01 / populacao01;
    
    // Entrada de dados da cidade 2.
    printf("\nInforme o código do estado 2: ");
    scanf(" %c", &estado02);

    while((getchar()) != '\n');

    printf("Informe o código da carta 2: ");
    scanf("%s", &codigo_carta02);

    printf("Informe o nome da cidade 2: ");
    scanf("%s", &nome_cidade02);

    printf("Informe a população da cidade 2: ");
    scanf("%d", &populacao02);

    printf("Informe quantos pontos turísticos tem a cidade 2: ");
    scanf("%d", &pontos_turisticos02);

    printf("Informe a área urbana da cidade 2: ");
    scanf("%f", &area02);

    printf("Informe o PIB da cidade 2: ");
    scanf("%f", &pib02);

    // Processamento dos dados da cidade 2.
    densidade_populacional02 = populacao02 / area02;
    pib_per_capta02 = pib02 / populacao02;

    // Comparação das cartas.
        printf("\n====== COMPARAÇÃO DE CARTAS (atributo área urbana) ======\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_cidade01, area01);
        printf("Carta 2 - %s: %.2f km²\n", nome_cidade02, area02);
        if(area01 > area02){
            printf("Resultado: Carta 1 venceu.\n");
        }else{
            printf("Resultado: Carta 2 venceu.\n");
        }

    return 0;
}