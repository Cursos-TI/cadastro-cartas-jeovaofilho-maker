#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
//Jeová Ricardo
int main() {
    // Variáveis da Carta 1 
    char estado1[20];
    char codigo1[20];
    char nomecidade1[100];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float PIBpercapita1;

    // Variáveis da Carta 2
    char estado2[20];
    char codigo2[20];
    char nomecidade2[100];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;

    // Entrada de dados da Carta 1
    printf("***cadastro da carta 1*** \n");
    printf("digite o estado: \n");
    scanf("%s", estado1);

    printf("digite o codigo da carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade1);

    printf("digite a população: \n");
    scanf("%d", &populacao1);

    printf("digite a área (em km²): \n");
    scanf("%f", &area1);

    printf("digite o PIB (bilhões de reais): \n");
    scanf("%f", &PIB1);

    printf("digite o número de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados da Densidade Populacional da Carta 1
    densidadepopulacional1 = (float)(populacao1 / area1);

    // Entrada de dados da PIB Per Capita da Carta 1
    PIBpercapita1 = (float)(PIB1 / populacao1);

    // Entrada de dados da Carta 2
    printf("\n***Cadastro da Carta 2*** \n");
    printf("digite o estado: \n");
    scanf("%s", estado2);

    printf("digite o codigo da carta (ex: A02): \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade2);

    printf("digite a população: \n");
    scanf("%d", &populacao2);

    printf("digite a área (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &PIB2);

    printf("digite o número de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    // Entrada de dados da Densidade Populacional da Carta 2
    densidadepopulacional2 = (float)(populacao2 / area2);

    // Entrada de dados da PIB Per Capita da Carta 2
    PIBpercapita2 = (float)(PIB2 / populacao2);

    // Exibição das informações
    printf("\n***CARTA 1*** \n");
    printf("estado: %s\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("nome da cidade: %s\n", nomecidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.1f\n", area1);
    printf("PIB: %.1f\n", PIB1);
    printf("numero de pontos turisticos: %d\n", pontosturisticos1);
    printf("dencidade populacional: %.1f\n", densidadepopulacional1);
    printf("PIBpercapita: %.1f\n", PIBpercapita1);

    printf("\n***CARTA 2*** \n");
    printf("estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", nomecidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.1f\n", area2);
    printf("PIB: %.1f\n", PIB2);
    printf("numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("dencidade populacional: %.1f\n", densidadepopulacional2);
    printf("PIBpercapita: %.1f\n", PIBpercapita2);

    return 0;
}