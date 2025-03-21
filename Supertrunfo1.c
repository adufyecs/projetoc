#include <stdio.h>

int main() {
    //variaveis
    char estado1[3], estado2[3];
    char codigo_estado1[5], codigo_estado2[5];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numero_turistico1, numero_turistico2;

    //chamado para armazenar os dados nas variaveis
    printf("Digite o primeiro estado:\n");
    scanf(" %s", estado1);

    printf("Digite o segundo estado:\n");
    scanf(" %s", estado2);

    printf("Digite o código do estado 1:\n");
    scanf(" %s", codigo_estado1);

    printf("Digite o código do estado 2:\n");
    scanf(" %s", codigo_estado2);

    printf("Digite o nome da cidade 1:\n");
    scanf(" %s", nome_cidade1);

    printf("Digite o nome da cidade 2:\n");
    scanf(" %s", nome_cidade2);

    printf("Digite a população da cidade 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a população da cidade 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 1 (km²):\n");
    scanf("%f", &area1);

    printf("Digite a área da cidade 2 (km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1 (bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o PIB da cidade 2 (bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &numero_turistico1);

    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &numero_turistico2);

    // Cálculo de densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = (float) (pib1 / populacao1) * 1000000;
    float pib_per_capita2 = (float) (pib2 / populacao2) * 1000000;

    //Cálculo do super poder
    float super_poder1 = (float) populacao1 + area1 + pib1 + numero_turistico1 + pib_per_capita1 + (1 / densidade1);
    float super_poder2 = (float) populacao2 + area2 + pib2 + numero_turistico2 + pib_per_capita2 + (1 / densidade2);
     
    //resultado da carta 1
    printf("\n==== CARTA 1 ====\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo_estado1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.3f reais\n", pib_per_capita1);
    printf("Super poder: %f\n", super_poder1);
    
    //resultado da carta 2
    printf("\n==== CARTA 2 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_estado2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f reais\n", pib_per_capita2);
    printf("Super poder: %f\n", super_poder2);

    //variaveis para o resultado das comparações
    int resultado_populacao = populacao1 > populacao2;
    int resultado_area = area1 > area2;
    int resultado_pib = pib1 > pib2;
    int resultado_turistico = numero_turistico1 > numero_turistico2;
    int resultado_densidade = densidade1 < densidade2;
    int resultado_per_capita = pib_per_capita1 > pib_per_capita2;
    int resultado_superpoder = super_poder1 > super_poder2;

    //Resultado na tela das comparações
    printf("\n****RESULTADO****\n");
    printf("população: %d\n", resultado_populacao);
    printf("area: %d\n", resultado_area);
    printf("pib: %d\n", resultado_pib);
    printf("turistico: %d\n", resultado_turistico);
    printf("densidade: %d\n", resultado_densidade);
    printf("PIB per capita: %d\n", resultado_per_capita);
    printf("Super poder: %d\n", resultado_superpoder);


    

    return 0;
}
