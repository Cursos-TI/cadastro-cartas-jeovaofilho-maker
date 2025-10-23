#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    printf("\nDigite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Codigo da Carta (ex: A01, A02): \n");
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
    printf("\nDigite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta (ex: A01, A02): \n");
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
    printf("\nEstado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área (Km²): %.2f\n", area1);
    printf("PIB (Bilhões de Reais): R$ %.2f\n", PIB1);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB Per Capita: %.2f\n", PIBpercapita1);
    printf("Super Poder: %.4f\n", superpoder1);

    printf("\n***Carta 2*** \n");
    printf("\nEstado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (Km²): %.2f\n", area2);
    printf("PIB (Bilhões de Reais): R$ %.2f\n", PIB2);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f\n", PIBpercapita2);
    printf("Super Poder: %.4f\n", superpoder2);

/*   
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
    resultadoE = (float)densidadepopulacional1 > densidadepopulacional2;
    resultadoF = (float)PIBpercapita1 > PIBpercapita2;
    resultadoG = (float)superpoder1 > superpoder2;

    //Exibir o resultado das comparações
    printf("\n***Comparando as Cartas*** \n");
    printf("\nPopulação: Carta 1: %d\n", resultadoA);
    printf("Área (Km²): Carta 1: %d\n", resultadoB);
    printf("PIB (Bilhões de Reais): Carta 1: %d\n", resultadoC);
    printf("Número de Pontos Turísticos: Carta 1: %d\n", resultadoD);
    printf("Densidade Populacional: Carta 1: %d\n", resultadoE);
    printf("PIB Per Capita: Carta 1: %d\n", resultadoF);
    printf("Super Poder: Carta 1: %d\n", resultadoG);
    
    
    //Comparação de Atributos
    printf("\n***Comparando Atributos*** \n");
    if(populacao1 > populacao2){
        printf("\nPopulação - Carta 1 Venceu!\n");
    }else{
        printf("\nPopulação - Carta 2 Venceu!\n");
    }
    if(area1 > area2){
        printf("Área - Carta 1 Venceu!\n");
    }else{
        printf("Área - Carta 2 Venceu!\n");
    }
    if(PIB1 > PIB2){
        printf("PIB - Carta 1 Venceu!\n");
    }else{
        printf("PIB - Carta 2 Venceu!\n");
    }
    if(pontosturisticos1 > pontosturisticos2){
        printf("Pontos Turísticos - Carta 1 Venceu!\n");
    }else{
        printf("Pontos Turísticos - Carta 2 Venceu!\n");
    }
    if(densidadepopulacional1 < densidadepopulacional2){
        printf("Densidade Populacional - Carta 1 Venceu!\n");
    }else{
        printf("Densidade Populacional - Carta 2 Venceu!\n");
    }
    if(PIBpercapita1 > PIBpercapita2){
        printf("PIB Per Capita - Carta 1 Venceu!\n");
    }else{
        printf("PIB Per Capita - Carta 2 Venceu!\n");
    }
    if(superpoder1 > superpoder2){
        printf("Super Poder - Carta 1 Venceu!\n");
    }else{
        printf("Super Poder - Carta 2 Venceu!\n");
    }
    
    //Comparação de Cartas - Atributo: População
    printf("\n***VENCEDOR - ATRIBUTO POPULAÇÃO*** \n");
    printf("\nCarta 1 (%s) - População: %lu\n", estado1, populacao1);
    printf("Carta 2 (%s) - População: %lu\n", estado2, populacao2);

    if(populacao1 > populacao2){
        printf("\nCarta 1 - !!VENCEU!!\n");
    }else{
        printf("\nCarta 2 - !!VENCEU!!\n");
    }

*/
    //Adicionando switch
    //Variáveis
    int opcao;
    int atributo;
    int escolhacomputador;
    int escolhajogador;
    int computador;

    //Menu nterativo
    //Entrada de dasos
    printf("\nComparando as Cartas - Escolha a Carta: \n");
    printf("1. Carta 1 (%s)\n", estado1);
    printf("2. Carta 2 (%s)\n", estado2);
    printf("Jogador: ");
    scanf("%d", &opcao);

    opcao == 1 ? printf("Computador: 2\n") : printf("Computador: 1\n");
    /*
    if(opcao == 1){
        printf("Computador: 2");
    } else if(opcao == 2){
        printf("Computador: 1");
    } else {
        printf("## Opção Inválida \n");
    }
*/

    switch (opcao){
    case 1:
    printf("\nJogador: Carta 1 (%s) - Computador: Carta 2 (%s)\n", estado1, estado2);
    break;
    case 2:
    printf("\nJogador: Carta 2 (%s) - Computador: Carta 1 (%s)\n", estado2, estado1);
    break;
    default:
    printf("## Opção Inválida. ##\n");
    }

    //Atributo
    printf("\nEscolha o Atributo: \n");
    printf("Carta 1 (%s)\n", estado1);
    printf("Carta 2 (%s)\n", estado2);
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("\nJogador: ");
    scanf("%d", &escolhajogador);

    escolhacomputador = rand() %4 + 1;
    printf("Computador: %d\n", escolhacomputador);

    switch(escolhajogador){
    case 1:
    if(populacao1 > populacao2){
        printf("\nPopulação - Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(populacao1 < populacao2){
        printf("\nPopulação - Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nPopulação - Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
    case 2:
    if(area1 > area2){
        printf("\nÁrea - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(area1 < area2){
        printf("\nÁrea - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nÁrea - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
        case 3:
    if(PIB1 > PIB2){
        printf("\nPIB - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(PIB1 < PIB2){
        printf("\nPIB - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nPIB - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
        case 4:
    if(pontosturisticos1 > pontosturisticos2){
        printf("\nPontos Turísticos - Carta 1: %d - Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(pontosturisticos1 < pontosturisticos2){
        printf("\nPontos Turísticos - Carta 1: %d - Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nPontos Turísticos - Carta 1: %d - Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
        case 5:
    if(densidadepopulacional1 < densidadepopulacional2){
        printf("\nDensidade Populacional - Carta 1: %.2f - Carta 2: %d\n", densidadepopulacional1, densidadepopulacional2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else     if(densidadepopulacional1 > densidadepopulacional2){
        printf("\nDensidade Populacional - Carta 1: %.2f - Carta 2: %d\n", densidadepopulacional1, densidadepopulacional2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nDensidade Populacional - Carta 1: %.2f - Carta 2: %d\n", densidadepopulacional1, densidadepopulacional2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
    default:
        printf("## Opção Inválida. ##\n");

    }

    switch (escolhacomputador){
case 1:
    if(populacao1 > populacao2){
        printf("\nPopulação - Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(populacao1 < populacao2){
        printf("\nPopulação - Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nPopulação - Carta 1: %d - Carta 2: %d\n", populacao1, populacao2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
    case 2:
    if(area1 > area2){
        printf("\nÁrea - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(area1 < area2){
        printf("\nÁrea - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nÁrea - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
        case 3:
    if(PIB1 > PIB2){
        printf("\nPIB - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(PIB1 < PIB2){
        printf("\nPIB - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nPIB - Carta 1: %.2f - Carta 2: %.2f\n", area1, area2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
        case 4:
    if(pontosturisticos1 > pontosturisticos2){
        printf("\nPontos Turísticos - Carta 1: %d - Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else if(pontosturisticos1 < pontosturisticos2){
        printf("\nPontos Turísticos - Carta 1: %d - Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nPontos Turísticos - Carta 1: %d - Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;
        case 5:
    if(densidadepopulacional1 < densidadepopulacional2){
        printf("\nDensidade Populacional - Carta 1: %.2f - Carta 2: %d\n", densidadepopulacional1, densidadepopulacional2);
        printf("\n## Carta 1 (%s) - VENCEU!! ##\n", estado1);
    } else     if(densidadepopulacional1 > densidadepopulacional2){
        printf("\nDensidade Populacional - Carta 1: %.2f - Carta 2: %d\n", densidadepopulacional1, densidadepopulacional2);
        printf("\n## Carta 2 (%s) - VENCEU!! ##\n", estado2);
    } else {
        printf("\nDensidade Populacional - Carta 1: %.2f - Carta 2: %d\n", densidadepopulacional1, densidadepopulacional2);
        printf("\n## Deu empate. Tente Novamente. ##\n");
    }
    break;

    }


    return 0;
}