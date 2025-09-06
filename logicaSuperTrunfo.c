#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
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

    //Declarando Variáveis

char estado1 [50] = "Parana";
char estado2 [50] = "Tocantins";
char codigo1 [20];
char codigo2 [20];
char cidade1 [50];
char cidade2 [50];
int populacao1, populacao2;
float area1, area2;
float denspop1, denspop2;
float pib1, pib2;
float percapita1, percapita2;
int pontotur1, pontotur2;
float superpoder1, superpoder2;

//Primeiro Estado definido

    printf("Estado 1: %s\n", estado1);

//inserção de dados do estado A pelo usuário

    printf("\nInsira código da cidade 1(Estado 1 = A01 e Estado 2 = B01) \n");
    scanf("%s",codigo1);

    printf("Insira nome da cidade 1: \n");
    scanf("%s",cidade1);

    printf("Insira nº de habitantes da cidade 1: \n");
    scanf("%d",&populacao1);

    printf("Insira área da cidade 1 (em Km²): \n");
    scanf("%f",&area1);

    printf("Insira PIB da cidade 1 (em Bilhões de reais): \n");
    scanf("%f",&pib1);

    printf("Insira quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d",&pontotur1);

//Segundo Estado definido

    printf("\nEstado 2: %s\n", estado2);


//inserção de dados do estado B pelo usuário

    printf("\nInsira código da cidade 2 (Estado 1 = A01 e Estado 2 = B01): \n");
    scanf("%s",codigo2);

    printf("Insira nome da cidade 2: \n");
    scanf("%s",cidade2);

    printf("Insira nº de habitantes da cidade 2: \n");
    scanf("%d",&populacao2);

    printf("Insira área da cidade 2 (em Km²): \n");
    scanf("%f",&area2);

    printf("Insira PIB da cidade 2 (em Bilhôes de reais): \n");
    scanf("%f",&pib2);

    printf("Insira quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d",&pontotur2);
 
//cálculo de dendidade populacional

    denspop1 = populacao1 / area1;
    denspop2 = populacao2 / area2;

//cálculo do PIB Per Capita

    percapita1 = (pib1 / populacao1) * 1000000000; //para conversão de bilhão para real
    percapita2 = (pib2 / populacao2) * 1000000000; //para conversão de bilhão para real

//realizar cálculo do super poder 1

    superpoder1 = (float)populacao1 + (float)pontotur1 + area1 + pib1 + denspop1 + percapita1;

//realizar cálculo do super poder 2

    superpoder2 = (float)populacao2 + (float)pontotur2 + area2 + pib2 + denspop2 + percapita2;

//apresentação dos dados inseridos dos Estados A e B

    printf("\n Informações Cadastradas com Sucesso! Os dados serão exibidos abaixo!\n");
    printf("\n Carta 1\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d Habitantes\n Área: %f Km²\n PIB: %f Bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %f hab/Km²\n PIB Per Capita: %f reais\n Super Poder: %f\n",estado1,codigo1,cidade1,populacao1,area1,pib1,pontotur1,denspop1,percapita1,superpoder1);
    printf("\n Carta 2\n Estado: %s\n Código: %s\n Nome da Cidade: %s\n População: %d Habitantes\n Área: %f Km²\n PIB: %f Bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %f hab/Km²\n PIB Per Capita: %f reais\n Super Poder: %f\n",estado2,codigo2,cidade2,populacao2,area2,pib2,pontotur2,denspop2,percapita2,superpoder2);

//comparacão dos atributos das cartas

printf("\n****Compararção dos atributos****\n");
printf("\nO atributo escolhido é: POPULAÇÂO!\n");
printf("\nCarta 1 - %s: %d\n", cidade1, populacao1);
printf("Carta 2 - %s: %d\n", cidade2, populacao2);

if(populacao1 >= populacao2){
    printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
}else{
    printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
}

    return 0;
}
