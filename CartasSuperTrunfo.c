#include <stdio.h>

// Desafio Super Trunfo - Estados.
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

    // Saída de dados da cidade 1.
    printf("========== CARTA 01 ==========\n");
    printf("Estado: %c\n", estado01);
    printf("Código da carta: %s\n", codigo_carta01);
    printf("Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Pontos turísticos: %d\n", pontos_turisticos01);
    printf("Área urbana: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional01);
    printf("PIB per capta: %.2f reais/hab\n", pib_per_capta01);

    // Entrada de dados da cidade 2.
    printf("Informe o código do estado 2: ");
    scanf(" %c", &estado02);

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

    // Saída de dados da cidade 2
    printf("========== CARTA 02 ==========\n");
    printf("Estado: %c\n", estado02);
    printf("Código da carta: %s\n", codigo_carta02);
    printf("Cidade: %s\n", nome_cidade02);
    printf("População: %d\n", populacao02);
    printf("Pontos turísticos: %d\n", pontos_turisticos02);
    printf("Área urbana: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional02);
    printf("PIB per capta: %.2f reais/hab\n", pib_per_capta02);

    return 0;
}