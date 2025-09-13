#include <stdio.h>

int main (){

//Declarando Variáveis

char pais1 [50] = "Brasil";
char pais2 [50] = "Argentina";
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
float denspop1, denspop2;
int pontotur1, pontotur2;
int opcao;
int atributo;

//Apresentação do Menu Interativo

printf("Menu Principal\n");
printf("Escolha a opção desejada: \n");
printf("1.Iniciar o Jogo\n");
printf("2.Regras do Jogo\n");
printf("3.Sair do Jogo\n");
scanf("%d", &opcao);

//Prepração das cartas

switch (opcao)
{
case 1:
    
//Primeiro País definido

    printf("País 1: %s\n", pais1);

//inserção de dados do pais 1 pelo usuário

    printf("Insira nº de habitantes do %s: \n", pais1);
    scanf("%d",&populacao1);

    printf("Insira área do %s (em Km²): \n",pais1);
    scanf("%f",&area1);

    printf("Insira PIB do %s (em Bilhões de reais): \n",pais1);
    scanf("%f",&pib1);

    printf("Insira quantidade de pontos turísticos do %s: \n",pais1);
    scanf("%d",&pontotur1);

//Segundo País definido

    printf("\nPaís 2: %s\n", pais2);


//inserção de dados do País 2 pelo usuário

    printf("Insira nº de habitantes da %s: \n",pais2);
    scanf("%d",&populacao2);

    printf("Insira área da %s (em Km²): \n",pais2);
    scanf("%f",&area2);

    printf("Insira PIB da %s (em Bilhôes de reais): \n",pais2);
    scanf("%f",&pib2);

    printf("Insira quantidade de pontos turísticos da %s: \n",pais2);
    scanf("%d",&pontotur2);
 
//cálculo de dendidade populacional

    denspop1 = populacao1 / area1;
    denspop2 = populacao2 / area2;

//Apresentar atributos disponíveis para comparação

        printf("\nEscolham o atributo desejado para comparação:\n");
        printf("1.População\n");
        printf("2.Área\n");
        printf("3.PIB\n");
        printf("4.Número de pontos turísticos\n");
        printf("5.Densidade Demográfica\n");
        scanf("%d", &atributo);

        switch (atributo)
        {
        case 1:
            printf("###População###\n");
            printf("%s (%d pessoas) - %s (%d pessoas)\n", pais1,populacao1,pais2,populacao2);
            if(populacao1 > populacao2){
                printf("Pais 1 (%s) ganhou!\n",pais1);
            }else{
                printf("País 2 (%s) ganhou!\n",pais2);
            }        
            break;
        case 2:
            printf("###Área###\n");
            printf("%s (%.2f Km²)- %s (%.2f Km²)\n", pais1,area1,pais2,area2);
            if(area1 > area2){
                printf("Pais 1 (%s) ganhou!\n",pais1);
            }else{
                printf("País 2 (%s) ganhou!\n",pais2);
            }        
            break;
        case 3:
            printf("###PIB###\n");
            printf("%s (%.2f Bilhões de Reais) - %s (%.2f Bilhões de Reais)\n", pais1,pib1,pais2,pib2);
            if(pib1 > pib2){
                printf("Pais 1 (%s) ganhou!\n",pais1);
            }else{
                printf("País 2 (%s) ganhou!\n",pais2);
            }        
            break;
        case 4:
            printf("###Número de Pontos Turísticos###\n");
            printf("%s (%d pontos) - %s (%d pontos)\n", pais1, pontotur1, pais2, pontotur2);
            if(pontotur1 > pontotur2){
                printf("Pais 1 (%s) ganhou!\n",pais1);
            }else{
                printf("País 2 (%s) ganhou!\n",pais2);
            }        
            break;  
        case 5:
            printf("###Densidade Demográfica###\n");
            printf("%s (%.2f Hab/Km²) - %s (%.2f Hab/Km²)\n", pais1,denspop1, pais2, denspop2);
            if(denspop1 < denspop2){
                printf("Pais 1 (%s) ganhou!\n",pais1);
            }else{
                printf("País 2 (%s) ganhou\n!",pais2);
            }        
            break;          
        default:
            printf("Opção Inválida!");
            break;
        }

    break;
case 2:
    printf("Regras do Jogo\n");
    printf("Ganha a carta que tiver o maior valor para o atributo escolhido.\n");
    printf("Para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
    break;
case 3:
    printf("Sair do Jogo\n");
    break;
default:
        printf("Opção Inválida!");
    break;
}

return 0;

}