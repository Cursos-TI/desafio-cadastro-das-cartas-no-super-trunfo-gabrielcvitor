#include <stdio.h>
int main (){
char estado[2];
char codigodacarta[3];
char cidade[30];
int populacao = 1234;
float area = 4321;
float pib = 134;
int pontosturisticos = 159753;
  


printf("Super Trunfo \n");

printf("Insira os dados das cidades em suas respectivas cartas: \n");

printf("Carta 1 \n");

printf("Digite estado a que a cidade pertence: \n");
scanf("%s", estado);

printf("Crie um código para identificação da carta, ele deve começar pela letra maiúscula que representa o estado, seguida de um número de dois digitos de 01 a 04: \n");
scanf("%s", codigodacarta);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade);

printf("Digite o número de habitantes da cidade: \n");
scanf("%d", &populacao);

printf("Digite a área da cidade em km²:\n");
scanf("%f", &area);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos);

  printf("Carta 1:");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigodacarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
 
  printf("Carta 2 \n");

  printf("Digite estado a que a cidade pertence: \n");
  scanf("%s", estado);

  printf("Crie um código para a carta começando pela letra maiúscula que representa o estado seguida de um número de 01 a 04: \n");
  scanf("%s", codigodacarta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em km²:\n");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: \n");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos);

  printf("Carta 2:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigodacarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.f km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
return 0;
}
