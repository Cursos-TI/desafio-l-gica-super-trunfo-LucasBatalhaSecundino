#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int npt1, npt2;
    unsigned long int populacao1, populacao2;
    char nomepais1[30], nomepais2[30];
    float area1, area2, pib1, pib2;
    char codigoc1, codigoc2;
    int escolhaj1, escolhaj2;
    int resultado1, resultado2;

    // Cadastro da Carta 1
    printf("=== CARTA 1 ===\n");
    printf("Digite o código da carta 1 (A - H): ");
    scanf(" %c", &codigoc1);
    printf("Digite o nome do país: ");
    scanf("%s", nomepais1);
    printf("Digite o tamanho populacional: ");
    scanf("%lu", &populacao1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a área do país: ");
    scanf("%f", &area1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt1);

    float densidade1 = (float)populacao1 / area1;
    float pibpct1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Digite o código da carta 2 (A - H): ");
    scanf(" %c", &codigoc2);
    printf("Digite o nome do país: ");
    scanf("%s", nomepais2);
    printf("Digite o tamanho populacional: ");
    scanf("%lu", &populacao2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a área do país: ");
    scanf("%f", &area2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt2);

    float densidade2 = (float)populacao2 / area2;
    float pibpct2 = pib2 / populacao2;

    // Exibição das cartas
    printf("\n=== CARTA 01 ===\n");
    printf("Código: %c\n", codigoc1);
    printf("País: %s\n", nomepais1);
    printf("População: %lu\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpct1);

    printf("\n=== CARTA 02 ===\n");
    printf("Código: %c\n", codigoc2);
    printf("País: %s\n", nomepais2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpct2);

    // Escolha do atributo para comparação (Jogador 1)
    printf("\n=== COMPARAÇÃO ===\n");
    printf("Jogador 1, escolha um dos atributos (1 ao 6):\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaj1);

    printf("\n=== RESULTADO JOGADOR 1 ===\n");
    
    switch (escolhaj1) {
        case 1: resultado1 = populacao1 > populacao2 ? 1 : 0;
            printf("População: %lu vs %lu\n", populacao1, populacao2); break;
        case 2: resultado1 = pib1 > pib2 ? 1 : 0;
            printf("PIB: %.2f vs %.2f\n", pib1, pib2); break;
        case 3: resultado1 = area1 > area2 ? 1 : 0;
            printf("Área: %.2f vs %.2f\n", area1, area2); break;
        case 4: resultado1 = npt1 > npt2 ? 1 : 0;
            printf("Pontos turísticos: %d vs %d\n", npt1, npt2); break;
        case 5: resultado1 = densidade1 < densidade2 ? 1 : 0;
            printf("Densidade populacional: %.2f vs %.2f\n", densidade1, densidade2); break;
        case 6: resultado1 = pibpct1 > pibpct2 ? 1 : 0;
            printf("PIB per capita: %.2f vs %.2f\n", pibpct1, pibpct2); break;
        default: printf("Escolha inválida!\n");
    }

    if (resultado1 == 1){
     printf("O país %s venceu!\n", nomepais1);
    }else{
        printf("O país %s venceu!\n", nomepais2);}

    // Escolha do atributo para comparação (Jogador 2)
    printf("\n=== COMPARAÇÃO ===\n");
    printf("Jogador 2, escolha um dos atributos (1 ao 6):\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaj2);
    if (escolhaj1 == escolhaj2)
    {
        printf("Você escolheu o mesmo atributo\n");

    } else{
    

    printf("\n=== RESULTADO JOGADOR 2 ===\n");

    switch (escolhaj2) {
        case 1: resultado2 = populacao2 > populacao1 ? 1 : 0;
            printf("População: %lu vs %lu\n", populacao1, populacao2);
             break;
        case 2: resultado2 = pib2 > pib1 ? 1 : 0;
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
             break;
        case 3: resultado2 = area2 > area1 ? 1 : 0;
            printf("Área: %.2f vs %.2f\n", area1, area2);
             break;
        case 4: resultado2 = npt2 > npt1 ? 1 : 0;
            printf("Pontos turísticos: %d vs %d\n", npt1, npt2);
             break;
        case 5: resultado2 = densidade2 < densidade1 ? 1 : 0;
            printf("Densidade populacional: %.2f vs %.2f\n", densidade1, densidade2); 
            break;
        case 6: resultado2 = pibpct2 > pibpct1 ? 1 : 0;
            printf("PIB per capita: %.2f vs %.2f\n", pibpct1, pibpct2);
             break;
        default: printf("Escolha inválida!\n");
        break;
    }
}

    if (resultado2 == 1) {
        printf("O país %s venceu!\n", nomepais2);
    }
    else {
        printf("O país %s venceu!\n", nomepais1);
    }    



    return 0;
}
