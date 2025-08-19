#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int npt1, npt2;
    unsigned long int populacao1, populacao2;
    char nomedacidade1[20], nomedacidade2[20], estado1[20], estado2[20];
    float area1, area2, pib1, pib2;
    char codigodac1, codigodac2;
    int escolhaj1;

    // Cadastro da Carta 1
    printf("=== CARTA 1 ===\n");
    printf("Digite o código da carta 1 (A - H): ");
    scanf(" %c", &codigodac1);
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade1);
    printf("Digite o tamanho populacional: ");
    scanf("%lu", &populacao1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &npt1);

    float densidade1 = (float)populacao1 / area1;
    float pibpct1 = pib1 / populacao1;

    // Cadastro da Carta 2
    printf("\n=== CARTA 2 ===\n");
    printf("Digite o código da carta 2 (A - H): ");
    scanf(" %c", &codigodac2);
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade2);
    printf("Digite o tamanho populacional: ");
    scanf("%lu", &populacao2);
    printf("Digite o pib: ");
    scanf("%f", &pib2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &npt2);

    float densidade2 = (float)populacao2 / area2;
    float pibpct2 = pib2 / populacao2;

    // Exibição das cartas
    printf("\n=== CARTA 01 ===\n");
    printf("Código da carta: %c\n", codigodac1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %.2f\n", area1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta: %.2f\n", pibpct1);

    printf("\n=== CARTA 02 ===\n");
    printf("Código da carta: %c\n", codigodac2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f\n", area2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n", pibpct2);

    // Escolha do atributo para comparação
    printf("\n=== COMPARAÇÃO ===\n");
    printf("Jogador 1, escolha um dos atributos:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaj1);

    // Comparação baseada na escolha
    printf("\n=== RESULTADO ===\n");
    
    switch (escolhaj1) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %lu vs %s: %lu\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 (%s) venceu!\n", nomedacidade1);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 2:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f vs %s: %.2f\n", nomedacidade1, pib1, nomedacidade2, pib2);
            if (pib1 > pib2) {
                printf("Carta 1 (%s) venceu!\n", nomedacidade1);
            } else if (pib1 < pib2) {
                printf("Carta 2 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 3:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f vs %s: %.2f\n", nomedacidade1, area1, nomedacidade2, area2);
            if (area1 > area2) {
                printf("Carta 1 (%s) venceu!\n", nomedacidade1);
            } else if (area1 < area2) {
                printf("Carta 2 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 4:
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d vs %s: %d\n", nomedacidade1, npt1, nomedacidade2, npt2);
            if (npt1 > npt2) {
                printf("Carta 1 (%s) venceu!\n", nomedacidade1);
            } else if (npt1 < npt2) {
                printf("Carta 2 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 5:
            printf("Atributo escolhido: Densidade populacional\n");
            printf("%s: %.2f vs %s: %.2f\n", nomedacidade1, densidade1, nomedacidade2, densidade2);
            // Para densidade, quem tem MENOS densidade geralmente é melhor
            if (densidade1 < densidade2) {
                printf("Carta 1 (%s) venceu!\n", nomedacidade1);
            } else if (densidade1 > densidade2) {
                printf("Carta 2 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        case 6:
            printf("Atributo escolhido: PIB per capita\n");
            printf("%s: %.2f vs %s: %.2f\n", nomedacidade1, pibpct1, nomedacidade2, pibpct2);
            if (pibpct1 > pibpct2) {
                printf("Carta 1 (%s) venceu!\n", nomedacidade1);
            } else if (pibpct1 < pibpct2) {
                printf("Carta 2 (%s) venceu!\n", nomedacidade2);
            } else {
                printf("EMPATE!\n");
            }
            break;
            
        default:
            printf("Escolha inválida! O jogo será encerrado.\n");
            break;
    }

    return 0;
}