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
    printf("## Bem vindo ao Super Trunfo ##\n");
    printf("\n**Cadastro da Carta 1** \n");
    printf("Digite o Estado: \n");
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
    printf("\n**Cadastro da Carta 2** \n");
    printf("Digite o Estado: \n");
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
    printf("Estado: %s\n", estado1);
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
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (Km²): %.2f\n", area2);
    printf("PIB (Bilhões de Reais): R$ %.2f\n", PIB2);
    printf("Numero de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB Per Capita: %.2f\n", PIBpercapita2);
    printf("Super Poder: %.4f\n", superpoder2);

    //Adicionando switch
    //Variáveis
    srand(time(0));
    int resultado1;
    int atributo1;
    float ataque1 = 0;
    float defesa1 = 0;
    int resultado2;
    int atributo2;
    float ataque2 = 0;
    float defesa2 = 0;
    float soma1 = 0;
    float soma2 = 0;
    
    //Iniciando o jogo
    printf("\n## Bem vindo ao Super Trunfo ##\n");
    printf("1. Carta 1 (%s)\n", estado1);
    printf("2. Carta 2 (%s)\n", estado2);

    //Menu interativo 1
    printf("\nEscolha o primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("\nDigite a primeira opção: ");
    scanf("%d", &atributo1);

    //Menu nterativo 2
    printf("\nEscolha o segundo atributo (não pode ser igual ao primeiro): \n");
    switch(atributo1){
    case 1:
        printf("2. Área\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n");
    break;
    case 2:
        printf("1. População\n3. PIB\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n");
    break;
    case 3:
        printf("1. População\n2. Área\n4. Número de Pontos Turísticos\n5. Densidade Populacional\n");
    break;
    case 4:
        printf("1. População\n2. Área\n3. PIB\n5. Densidade Populacional\n");
    break;
    case 5:
        printf("1. População\n2. Área\n3. PIB\n4. Número de Pontos Turísticos\n");
    break;
    default:
    printf("## Opção Inválida. ##\n");    
    return 0;
    }

    printf("\nDigite a segunda opção: ");
    scanf("%d", &atributo2);
  
    //Condição para evitar escolher o mesmo atributo
    if(atributo1 == atributo2){
        printf("## Você escolheu o mesmo atributo. Tente Novamente! ##\n");
    return 0;
    }

    //Atributo1
    switch(atributo1){
        case 1:
    ataque1 = populacao1;
    ataque2 = populacao2;
    break;
        case 2:
    ataque1 = area1;
    ataque2 = area2;
    break;
        case 3:
    ataque1 = PIB1;
    ataque2 = PIB2;
    break;
        case 4:
    ataque1 = pontosturisticos1;
    ataque2 = pontosturisticos2;
    break;
        case 5:
    ataque1 = densidadepopulacional1;
    ataque2 = densidadepopulacional2;
    break;
    default:
        printf("\n## Atributo inválido! ##\n");
    return 0;
    }

    //atributo2
    switch(atributo2){
        case 1:
    defesa1 = populacao1;
    defesa2 = populacao2;
    break;
        case 2:
    defesa1 = area1;
    defesa2 = area2;
    break;
        case 3:
    defesa1 = PIB1;
    defesa2 = PIB2;
    break;
        case 4:
    defesa1 = pontosturisticos1;
    defesa2 = pontosturisticos2;
    break;
        case 5:
    defesa1 = densidadepopulacional1;
    defesa2 = densidadepopulacional2;
    break;
    default:
        printf("\n## Atributo inválido! ##\n");
    return 0;
    }

    //Exibindo atributos escolhidos
    printf("\nAtributos: %d e %d\n", atributo1, atributo2);
    
    //Comparação dos atributos
    printf("Atributo 1: \n");
    if(atributo1 == 1){
        printf("## População. ##\n");
    } else if(atributo1 == 2){
        printf("## Àrea. ##\n");
    } else if(atributo1 == 3){
        printf("## PIB. ##\n");
    } else if(atributo1 == 4){
        printf("## Pontos Turísticos. ##\n");
    } else if(atributo1 == 5){
        printf("## Densidade Populacional. ##\n");
    } else {
        printf("## Opção inválida. ##\n");
    }
    printf("Carta 1: %s: %.2f\n", estado1, ataque1);
    printf("Carta 2: %s: %.2f\n", estado2, ataque2);

    printf("\nAtributo 2: \n");
    if(atributo2 == 1){
        printf("## População. ##\n");
    } else if(atributo2 == 2){
        printf("## Àrea. ##\n");
    } else if(atributo2 == 3){
        printf("## PIB. ##\n");
    } else if(atributo2 == 4){
        printf("## Pontos Turísticos. ##\n");
    } else if(atributo2 == 5){
        printf("## Densidade Populacional. ##\n");
    } else {
        printf("## Opção inválida. ##\n");
    }
    printf("Carta 1: %s: %.2f\n", estado1, defesa1);
    printf("Carta 2: %s: %.2f\n", estado2, defesa2);

        //Comparando os atributos
    if(atributo1 == 5){
    resultado1 = (ataque1 < ataque2) ? 1 : (ataque1 > ataque2) ? -1 : 0;
    } else {
    resultado1 = (ataque1 > ataque2) ? 1 : (ataque1 < ataque2) ? -1 : 0;
    }

    if(atributo2 == 5){
    resultado2 = (defesa1 < defesa2) ? 1 : (defesa1 > defesa2) ? -1 : 0;
    } else {
    resultado2 = (defesa1 > defesa2) ? 1 : (defesa1 < defesa2) ? -1 : 0;
    }

    //Exibir resultados dos atributos
    printf("\nResultado do atributo 1: %s\n",
    (resultado1 == 1) ? estado1 : (resultado1 == -1) ? estado2: "## Empate. ##");

    printf("Resultado do atributo 2: %s\n",
    (resultado2 == 1) ? estado1 : (resultado2 == -1) ? estado2: "## Empate. ##");

    //Soma dos atributos
    soma1 = ataque1 + defesa1;
    soma2 = ataque2 + defesa2;

    printf("\nSoma dos Atributos: \n");
    printf("Carta 1: %s: %.2f\n", estado1, soma1);
    printf("Carta 2: %s: %.2f\n", estado2, soma2);

    //Vencedor
    printf("\n## Vencedor do Super Trunfo ##\n");
    if(soma1 > soma2){
        printf("## Carta 1 (%s) - VENCEU!! ##\n", estado1);
        printf("     ## FIM. ##\n");
    } else if(soma2 > soma1){
        printf("## Carta 2 (%s) - VENCEU!! ##\n", estado2);
        printf("     ## FIM. ##\n");
    } else {
        printf("## Empate. Tente Novamente. ##\n");
        printf("     ## FIM. ##\n");
    }

    return 0;
}