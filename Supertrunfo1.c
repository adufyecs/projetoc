#include <stdio.h>

int main() {
    //variaveis
    char estado1[3], estado2[3], codigo_estado1[5], codigo_estado2[5], nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2, numero_turistico1, numero_turistico2, resultado1, resultado2, primeiro_atributo, segundo_atributo;
    float area1, area2, pib1, pib2;
    
    
    
    //insira as informaçoes das duas cartas!
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
    
     
    //Menu para inicio das batalhas entre atributos
    printf("===== BEM VINDO AO SUPER-TRUNFO! =====\n");
    printf("Escolha um atributo.\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Número de pontos turísticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capita\n");
    printf("7.Super poder\n");

    //switch para escolha dos atributos 1
    printf("Escolha o primeiro atributo\n");
    scanf("%d", &primeiro_atributo);
    
    switch (primeiro_atributo)
    {
    case 1:
        printf("Você escolheu População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu Número de pontos turísticos!\n");
        resultado1 = numero_turistico1 > numero_turistico2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu Densidade populacional!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu PIB per capita!\n");
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 7:
        printf("Você escolheu Super poder!\n");
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
        break;
    default:
        printf("Opção invalida");
        break;
    }

    // armazenar escolha do atributo 2 e condição para caso escolha atributos iguais
    printf("escolha o segundo atributo\n");
    scanf("%d", &segundo_atributo);

    if (primeiro_atributo == segundo_atributo)
    {
        printf("Voçê escolheu o mesmo atributo\n");
    } else {
        //switch para escolha do atributo 2
        switch (segundo_atributo)
        {
            case 1:
            printf("Você escolheu População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Número de pontos turísticos!\n");
            resultado2 = numero_turistico1 > numero_turistico2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu Densidade populacional!\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu PIB per capita!\n");
            resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu Super poder!\n");
            resultado2 = super_poder1 > super_poder2 ? 1 : 0;
            break;
        
        default:
            break;
        }
    }
    //resultado final
    if (resultado1 && resultado2)
    {
        printf("%s Venceu!\n", nome_cidade1);
    } else if ( resultado1 != resultado2){
        printf("Empatou!!\n");
    } else{
        printf("%s Venceu!!!\n", nome_cidade2);
    } 
    


    

    return 0;
}
