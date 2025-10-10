#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
//Jeová Ricardo
int main() {
  
    //Variáveis da Carta 1 
    char estado1[20];
    char codigo1[20];
    char nomecidade1[100];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float PIBpercapita1;
    float superpoder1;

    //Variáveis da Carta 2
    char estado2[20];
    char codigo2[20];
    char nomecidade2[100];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float PIBpercapita2;
    float superpoder2;

    //Entrada de dados da Carta 1
    printf("***Cadastro da Carta 1*** \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Codigo da Carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade1);

    printf("Digite a População: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área (Km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (Bilhões de Reais): \n");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Entrada de dados da Densidade Populacional da Carta 1
    densidadepopulacional1 = (float)(populacao1 / area1);

    //Entrada de dados da PIB Per Capita da Carta 1
    PIBpercapita1 = (float)(PIB1 / populacao1);

    //Entrada de dados Super Poder Carta 1
    superpoder1 = (float)(populacao1 + area1 + PIB1 + pontosturisticos1 + PIBpercapita1 + (1/densidadepopulacional1));

    //Entrada de dados da Carta 2
    printf("\n***Cadastro da Carta 2*** \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta (ex: A02): \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite a População: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área (Km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Bilhões de Reais): \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    //Entrada de dados da Densidade Populacional da Carta 2
    densidadepopulacional2 = (float)(populacao2 / area2);

    //Entrada de dados da PIB Per Capita da Carta 2
    PIBpercapita2 = (float)(PIB2 / populacao2);

    //Entrada de dados Super Poder Carta 2
    superpoder2 = (float)(populacao2 + area2 + PIB2 + pontosturisticos2 + PIBpercapita2 + (1/densidadepopulacional2));


    //Exibição das informações
    printf("\n***Carta 1*** \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área (Km²): %.2f\n", area1);
    printf("PIB (Bilhões de Reais): R$ %.2f\n", PIB1);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Dencidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB Per Capita: %.2f\n", PIBpercapita1);
    printf("Super Poder: %.4f\n", superpoder1);

    printf("\n***Carta 2*** \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (Km²): %.2f\n", area2);
    printf("PIB (Bilhões de Reais): R$ %.2f\n", PIB2);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Dencidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f\n", PIBpercapita2);
    printf("Super Poder: %.4f\n", superpoder2);

//Comparação das cartas
    int resultadoA;
    int resultadoB;
    int resultadoC;
    int resultadoD;
    int resultadoE;
    int resultadoF;
    int resultadoG;

    resultadoA = populacao1 > populacao2;
    resultadoB = area1 > area2;
    resultadoC = PIB1 > PIB2;
    resultadoD = pontosturisticos1 > pontosturisticos2;
    resultadoE = densidadepopulacional1 > densidadepopulacional2;
    resultadoF = PIBpercapita1 > PIBpercapita2;
    resultadoG = superpoder1 > superpoder2;

    //Exibir o resultado das comparações
    printf("\n***Comparando Carta 1 e Carta 2*** \n");
    printf("Código 1: %s - Código 2: %s\n", codigo1, codigo2);
    printf("População: Carta 1: %d\n", resultadoA);
    printf("Área (Km²): Carta 1: %d\n", resultadoB);
    printf("PIB (Bilhões de Reais): Carta 1: %d\n", resultadoC);
    printf("Número de Pontos Turísticos: Carta 1: %d\n", resultadoD);
    printf("Dencidade Populacional: Carta 1: %d\n", resultadoE);
    printf("PIB Per Capita: Carta 1: %d\n", resultadoF);
    printf("Super Poder: Carta 1: %d\n", resultadoG);
    

    return 0;
}