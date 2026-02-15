#include <stdio.h>

int main(){

 char estado1[2], cidade1[20], codigo1[4];
 int populacao1, pontoturistico1;
 float areakm1, pib1;

   printf("Super Trunfo Novato\n\n");

   printf("Ensira as informações da Primeira Carta \n\n");
   
   printf("Ensira o Estado:");
   scanf("%s", estado1);

   printf("Ensira o código da carta:");
   scanf("%s", codigo1);
   
   printf("Ensira o Nome da Cidade:");
   scanf("%s", cidade1);

   printf("Ensira a População:");
   scanf("%d", &populacao1);

   printf("Ensira a Area em km²:");
   scanf("%f", &areakm1);

   printf("Ensira o PIB:");
   scanf("%f", &pib1);

   printf("Ensira o Numero de Pontos Turísticos:");
   scanf("%d", &pontoturistico1);

   printf("\nInformações da Primeira carta");

   printf("\nEstado: %s\n", estado1);
   printf("Código da carta: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.3fkm²\n", areakm1);
   printf("PIB: %.3fB\n", pib1);
   printf("Numero de Pontos Turísticos: %d\n", pontoturistico1);


 char estado2[2], cidade2[20], codigo2[4];
 int populacao2, pontoturistico2;
 float areakm2, pib2;

   printf("\nEnsira as informações da Segunda Carta \n");

   printf("\nEnsira o Estado:");
   scanf("%s", estado2);

   printf("Ensira o código da Carta:");
   scanf("%s", codigo2);
   
   printf("Ensira o Nome da Cidade:");
   scanf("%s", cidade2);

   printf("Ensira a População:");
   scanf("%d", &populacao2);

   printf("Ensira a Area em km²:");
   scanf("%f", &areakm2);

   printf("Ensira o PIB:");
   scanf("%f", &pib2);

   printf("Ensira o Numero de Pontos Turísticos:");
   scanf("%d", &pontoturistico2);

   printf("\nInformações da Segunda carta");

   printf("\nEstado: %s\n", estado2);
   printf("Código da carta: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.3fkm²\n", areakm2);
   printf("PIB: %.3fB\n", pib2);
   printf("Numero de Pontos Turísticos: %d\n", pontoturistico2);

return 0;
} 
