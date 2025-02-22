#include <stdio.h>

// Desafio Super Trunfo - Estados.
int main(){
    // Declaração de variáveis.
    char estado01, estado02;
    char codigo_carta01[4], codigo_carta02[4];
    char nome_cidade01[20], nome_cidade02[20];
    int populacao01, populacao02;
    int pontos_turisticos01, pontos_turisticos02;
    float area01, area02;
    float pib01, pib02;

    // Entrada de dados da cidade 1.
    printf("Informe o código do estado 1: \n");
    scanf(" %c", &estado01);

    printf("Informe o código da carta 1: \n");
    scanf("%s", &codigo_carta01);

    printf("Informe o nome da cidade 1: \n");
    scanf("%s", &nome_cidade01);

    printf("Informe a população da cidade 1: \n");
    scanf("%d", &populacao01);

    printf("Informe quantos pontos turísticos tem a cidade 1: \n");
    scanf("%d", &pontos_turisticos01);

    printf("Informe a área urbana da cidade 1: \n");
    scanf("%f", &area01);

    printf("Informe o PIB da cidade 1: \n");
    scanf("%f", &pib01);

    // Saída de dados da cidade 1.
    printf("========== CARTA 01 ==========\n");
    printf("Estado: %c\n", estado01);
    printf("Código da carta: %s\n", codigo_carta01);
    printf("Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Pontos turísticos: %d\n", pontos_turisticos01);
    printf("Área urbana: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);

    // Entrada de dados da cidade 2.
    printf("Informe o código do estado 2: \n");
    scanf(" %c", &estado02);

    printf("Informe o código da carta 2: \n");
    scanf("%s", &codigo_carta02);

    printf("Informe o nome da cidade 2: \n");
    scanf("%s", &nome_cidade02);

    printf("Informe a população da cidade 2: \n");
    scanf("%d", &populacao02);

    printf("Informe quantos pontos turísticos tem a cidade 2: \n");
    scanf("%d", &pontos_turisticos02);

    printf("Informe a área urbana da cidade 2: \n");
    scanf("%f", &area02);

    printf("Informe o PIB da cidade 2: \n");
    scanf("%f", &pib02);

    // Saída de dados da cidade 2
    printf("========== CARTA 02 ==========\n");
    printf("Estado: %c\n", estado02);
    printf("Código da carta: %s\n", codigo_carta02);
    printf("Cidade: %s\n", nome_cidade02);
    printf("População: %d\n", populacao02);
    printf("Pontos turísticos: %d\n", pontos_turisticos02);
    printf("Área urbana: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);

    return 0;
}