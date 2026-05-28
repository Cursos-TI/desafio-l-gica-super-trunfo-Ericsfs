#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {    // Variáveis definidas
    char Estado1 [50], Estado2 [50];
    char cidade1[50], cidade2 [50];
    int opcao1, opcao2;
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int Pontos_turisticos1, Pontos_turisticos2;


    printf("Bem vindo ao jogo SuperTrufo!!\n"); // inicio do jogo 
    printf("Vamos começar preenchendo os dados da primeira carta\n"); // informações da primeira carta


    printf("Digite o qual é o seu estado!\n");
    scanf("%s", Estado1);
    
    printf("Digite o qual é a sua carta!\n");
    scanf("%d", &opcao1);
     
    printf("Digite a sua cidade!\n");
    scanf("%s", cidade1);
     
    printf("Digite a população total de sua cidade!\n");
    scanf("%f", &populacao1);
    
    printf("Digite a área total em Km²\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da sua cidade\n");
    scanf("%f", &PIB1);
    
    printf("Digite a quantidade de pontos turístico em sua cidade!\n");
    scanf("%d", &Pontos_turisticos1);

    // scan das primeiras informações

    printf("O seu estado é: %s\n", Estado1);
    printf("A sua cidade é: %s\n", cidade1);
    printf("A população total é: %.2f\n",populacao1);
    printf("A área da ciade é: %.2f\n", area1);
    printf("O PIB da cidade é: %.2f\n", PIB1);
    printf("O número de pontos turísticos é:: %d\n", Pontos_turisticos1);

    float densidade_populacional1 = populacao1/area1;
    float PIB_percapito1 = PIB1/populacao1;

    printf("A Densidade populacional é: %.2f\n", densidade_populacional1);
    printf("O PIB percapito é: %.2f\n", PIB_percapito1);

    printf("Agora vamos para a segunda carta!!\n"); // informações da segunda carta

    printf("Digite o qual é o seu estado!\n");
    scanf("%s", Estado2);
    
    printf("Digite o qual é a sua carta!\n");
    scanf("%d", &opcao2);
     
    printf("Digite a sua cidade!\n");
    scanf("%s", cidade2);
     
    printf("Digite a população total de sua cidade!\n");
    scanf("%f", &populacao2);
    
    printf("Digite a área total em Km²\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da sua cidade\n");
    scanf("%f", &PIB2);
    
    printf("Digite a quantidade de pontos turístico em sua cidade!\n");
    scanf("%d", &Pontos_turisticos2);

// scan das informações da segunda carta
    printf("O seu estado é: %s\n", Estado2);
    printf("A sua cidade é: %s\n", cidade2);
    printf("A população total é: %.2f\n",populacao2);
    printf("A área da ciade é: %.2f\n", area2);
    printf("O PIB da cidade é: %.2f\n", PIB2);
    printf("O número de pontos turísticos é:: %d\n", Pontos_turisticos2);

    float densidade_populacional2 = populacao2/area2;
    float PIB_percapito2 = PIB1/populacao2;

    printf("A Densidade populacional é: %.2f\n", densidade_populacional2);
    printf("O PIB percapito é: %.2f\n", PIB_percapito2);

    // inicio da comparação de um dado especifico entre as duas cidades e no final a mensagem dizendo qual cidade venceu

   if (populacao1 > populacao2) {
        printf("Cidade 1 vence com o maior número de pessoas!.\n");
         } else {
        printf("Cidade 2 vence com o maior número de pessoas!.\n");
         }

    return 0;
}
