#include <stdio.h>

// Desafio Super Trunfo.
int main(){
    // Declaração de variáveis.
    char estado01, estado02;
    char codigo_carta01[4], codigo_carta02[4];
    char nome_cidade01[20], nome_cidade02[20];
    int populacao01, populacao02;
    int pontos_turisticos01, pontos_turisticos02;
    float area01, area02, densidade_populacional01, densidade_populacional02;
    float pib01, pib02, pib_per_capta01, pib_per_capta02;
    int opcao;

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

    // Menu interativo.
    printf("\n====== MENU PRINCIPAL ======\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1. População\n");
    printf("2. Área urbana\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("\nInforme a opção desejada: ");
    scanf("%d", &opcao);

    // Processamento da opção escolhida.
    printf("\n ====== RESULTADO ======\n");

    switch(opcao){
        case 1:
            if(populacao01 > populacao02){
                printf("A cidade de %s, com uma população de %d habitantes venceu a cidade de %s, com uma população de %d habitantes.\n", nome_cidade01, populacao01, nome_cidade02, populacao02);
                break;

            }else if(populacao02 > populacao01){
                printf("A cidade de %s, com uma população de %d habitantes venceu a cidade de %s, com uma população de %d habitantes.\n", nome_cidade02, populacao02, nome_cidade01, populacao01);
                break;

            }else{
                printf("Houve um empate entre as cidades de %s e %s, ambas com uma população de %d habitantes.\n", nome_cidade01, nome_cidade02, populacao01);
                break;
            }

        case 2:
            if(area01 > area02){
                printf("A cidade de %s, com uma área urbana de %.2f km² venceu a cidade de %s, com uma área urbana de %.2f km².\n", nome_cidade01, area01, nome_cidade02, area02);
                break;

            }else if(area02 > area01){
                printf("A cidade de %s, com uma área urbana de %.2f km² venceu a cidade de %s, com uma área urbana de %.2f km².\n", nome_cidade02, area02, nome_cidade01, area01);
                break;

            }else{
                printf("Houve um empate entre as cidades de %s e %s, ambas com uma área urbana de %.2f km².\n", nome_cidade01, nome_cidade02, area01);
                break;
            }

        case 3:
            if(pib01 > pib02){
                printf("A cidade de %s, com um PIB de R$ %.2f venceu a cidade de %s, com um PIB de R$ %.2f.\n", nome_cidade01, pib01, nome_cidade02, pib02);
                break;

            }else if(pib02 > pib01){
                printf("A cidade de %s, com um PIB de R$ %.2f venceu a cidade de %s, com um PIB de R$ %.2f.\n", nome_cidade02, pib02, nome_cidade01, pib01);
                break;

            }else{
                printf("Houve um empate entre as cidades de %s e %s, ambas com um PIB de R$ %.2f.\n", nome_cidade01, nome_cidade02, pib01);
                break;
            }

        case 4:
            if(pontos_turisticos01 > pontos_turisticos02){
                printf("A cidade de %s, com %d pontos turísticos venceu a cidade de %s, com %d pontos turísticos.\n", nome_cidade01, pontos_turisticos01, nome_cidade02, pontos_turisticos02);
                break;

            }else if(pontos_turisticos02 > pontos_turisticos01){
                printf("A cidade de %s, com %d pontos turísticos venceu a cidade de %s, com %d pontos turísticos.\n", nome_cidade02, pontos_turisticos02, nome_cidade01, pontos_turisticos01);
                break;

            }else{
                printf("Houve um empate entre as cidades de %s e %s, ambas com %d pontos turísticos.\n", nome_cidade01, nome_cidade02, pontos_turisticos01);
                break;
            }

        case 5:
            if(densidade_populacional01 > densidade_populacional02){
                printf("A cidade de %s, com uma densidade populacional de %.2f habitantes/km² venceu a cidade de %s, com uma densidade populacional de %.2f habitantes/km².\n", nome_cidade02, densidade_populacional02, nome_cidade01, densidade_populacional01);
                break;

            }else if(densidade_populacional02 < densidade_populacional01){
                printf("A cidade de %s, com uma densidade populacional de %.2f habitantes/km² venceu a cidade de %s, com uma densidade populacional de %.2f habitantes/km².\n", nome_cidade01, densidade_populacional01, nome_cidade02, densidade_populacional02);
                break;

            }else{
                printf("Houve um empate entre as cidades de %s e %s, ambas com uma densidade populacional de %.2f habitantes/km².\n", nome_cidade01, nome_cidade02, densidade_populacional01);
                break;
            }
                
        default:
            printf("Opção inválida.\n");
    }  

    return 0;
}