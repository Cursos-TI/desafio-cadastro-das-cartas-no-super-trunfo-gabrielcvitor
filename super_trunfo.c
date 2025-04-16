#include <stdio.h>
int main (){
//variaveis para dados das cartas
char estado[1]; //representação do estado
char codigodacarta[3]; //código da carta
char cidade[30]; //nome da cidade
int populacao = 1234; //população com valor inicial 1234
float area = 4321; //area da cidade com valor inicial 4321
float pib = 10000; //pib da cidade com valor inicial 10000
int pontosturisticos = 15; //pontos turisticos com valor inicial 15
float densidade = (float) populacao / area; //numero de pessoas por km²
float pibpercapita = (float) pib / populacao; //riquiza media das pessoas (PIB/POPULAÇAO)
  

//Mensagem de introdução do jogo
printf("*** Super Trunfo ***\n");

printf("Insira os dados das cidades em suas respectivas cartas: \n");

//Entrada de dados da carta 1
printf("Carta 1 \n");

//Representação do estado por uma letra de 'A' a 'H'
printf("Insira uma letra de 'A' a 'H' para representar o estado a que a cidade pertence: \n");
scanf("%s", estado);

//Código de identificação da carta, com uma letra seguida por dois dígitos
printf("Crie um código para identificação da carta. Ele deve começar pela letra maiúscula que representa o estado, seguida de um número de dois digitos de 01 a 04: \n");
scanf("%s", codigodacarta);

//Nome da cidade
printf("Digite o nome da cidade: \n");
scanf("%s", cidade);

//População da cidade
printf("Digite o número de habitantes da cidade: \n");
scanf("%d", &populacao);

//Área da cidade
printf("Digite a área da cidade em km²:\n");
scanf("%f", &area);

//PIB da cidade
printf("Digite o PIB da cidade em bilhões de reais: \n");
scanf("%f", &pib);
  

//Número de pontos turísticos da cidade
printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos);

//Calculo de densidade e PIB per Capita Carta 1
densidade = (float) populacao / area; 
pibpercapita = (float) (pib * 1000000000) / populacao; 
  


//Impressão dos dados da Carta 1
  printf("Carta 1:");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigodacarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %.3f hab/km²\n", densidade);
  printf("PIB per Capita: %.3f reais\n", pibpercapita);
 
  //Entrada de dados da carta 2
  printf("Carta 2 \n");

  //Representação do estado por uma letra de 'A' a 'H'
  printf("Insira uma letra de 'A' a 'H' para representar o estado a que a cidade pertence: \n");
  scanf("%s", estado);

  //Código de identificação da carta, com uma letra seguida por dois dígitos
  printf("Crie um código para identificação da carta. Ele deve começar pela letra maiúscula que representa o estado, seguida de um número de dois digitos de 01 a 04: \n");
  scanf("%s", codigodacarta);

  //Nome da cidade
  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade);

  //População da cidade
  printf("Digite o número de habitantes da cidade: \n");
  scanf("%d", &populacao);

  //Área da cidade
  printf("Digite a área da cidade em km²:\n");
  scanf("%f", &area);

  //PIB da cidade
  printf("Digite o PIB da cidade em bilhões de reais: \n");
  scanf("%f", &pib);

  //Número de pontos turísticos da cidade
  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos);

  //Cálculo de densidade e PIB per Capita Carta 2
  densidade = (float) populacao / area;
  pibpercapita = (float) (pib * 1000000000) / populacao;
  

  //Impressão de dados da carta 2
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigodacarta);
  printf("Nome da cidade: %s\n", cidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
  printf("Densidade Populacional: %.3f hab/km²\n", densidade);
  printf("PIB per Capita: %.3f reais\n", pibpercapita);
return 0;
}
