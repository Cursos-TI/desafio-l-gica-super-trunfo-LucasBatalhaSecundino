#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int npt1, npt2;
    unsigned long int populacao1, populacao2;
    char nomedacidade1[20], nomedacidade2[20], estado1[20], estado2[20], codigodacarta1, codigodacarta2;
    float area1, area2, pib1, pib2;
    char codigodac1, codigodac2;

    
    printf("Digite o código da carta 1 (A - H): \n");
    scanf(" %c", &codigodac1);
    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade1);
    printf("Digite o tamanho populacional: \n");
    scanf("%lu", &populacao1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &npt1);

    float densidade1 = (float)populacao1 / area1;
    float pibpct1 = pib1 / populacao1;


    printf("Digite o código da carta 2 (A - H): \n");
    scanf(" %c", &codigodac2);
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade2);
    printf("Digite o tamanho populacional: \n");
    scanf("%lu", &populacao2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("Digite a área: \n", area2);
    scanf("%f", &area2);
    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &npt2);

    float densidade2 = (float)populacao2 / area2;
    float pibpct2 = pib2 / populacao2;

    //exibição das cartas
    printf("CARTA 01: \n");
    printf("Código da carta: %c\n", codigodac1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %lu\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Área: %.2f\n", area1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta: %.2f\n", pibpct1);

    //exibição das cartas
    printf("CARTA 02: \n");
    printf("Código da carta: %c\n", codigodac2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %lu\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Área: %.2f\n", area2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n", pibpct2);

    if (populacao1 > populacao2)
    {printf("População da carta 1 é superior à carta 2\n");
        /* code */
    }else{
        printf("População da carta 2 é superior à carta 1\n");
    }
    if (pib1 > pib2)
    {printf("O PIB da carta 1 é superior à carta 2\n");
        /* code */
    }else{
        printf("O PIB da carta 2 é superior à carta 1\n");
    }
    if (area1 > area2)
    {printf("A área da carta 1 é superior à carta 2\n");
        /* code */
    }else{
        printf("A área da carta 2 é superior à carta 1\n");
    }
    if (npt1 > npt2)
    {printf("O número de pontos turísticos da carta 1 é superior à carta 2\n");
        /* code */
    }else{
        printf("O número de pontos turísticos da carta 2 é superior à carta 1\n");
    }
    if (densidade1 > densidade2)
    {printf("A densidade da carta 1 é superior à carta 2\n");
        /* code */
    }else{
        printf("A densidade da carta 2 é superior à carta 1\n");
    }
    if (pibpct1 > pibpct2)
    {printf("O PIB per capta da carta 1 é superior à carta 2\n");
        /* code */
    }else{
        printf("O PIB per capta da carta 2 é superior à carta 1\n");
    }
    
    







    
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
