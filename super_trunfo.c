#include <stdio.h>
int main (){
//variaveis para dados da carta  1
char estado1[1]; //representação do estado
char codigodacarta1[3]; //código da carta
char cidade1[30]; //nome da cidade
unsigned long int populacao1 = 1234; //população com valor inicial 1234
float area1 = 4321; //area da cidade com valor inicial 4321
float pib1 = 10000; //pib da cidade com valor inicial 10000
int pontosturisticos1 = 15; //pontos turisticos com valor inicial 15
float densidade1 = (float) populacao1 / area1; //numero de pessoas por km²
float pibpercapita1 = (float) pib1 / populacao1; //riquiza media das pessoas (PIB/POPULAÇAO)
unsigned long int superPoder1 = 753951; //Soma de todos atributos numéricos


char estado2[1]; //representação do estado
char codigodacarta2[3]; //código da carta
char cidade2[30]; //nome da cidade
unsigned long int populacao2 = 1234; //população com valor inicial 1234
float area2 = 4321; //area da cidade com valor inicial 4321
float pib2 = 10000; //pib da cidade com valor inicial 10000
int pontosturisticos2 = 15; //pontos turisticos com valor inicial 15
float densidade2 = (float) populacao2 / area2; //numero de pessoas por km²
float pibpercapita2 = (float) pib2 / populacao2; //riquiza media das pessoas (PIB/POPULAÇAO)  
unsigned long int superPoder2 = 753951; //Soma de todos atributos numéricos


//Mensagem de introdução do jogo
printf("*** Super Trunfo ***\n");

printf("Insira os dados das cidades em suas respectivas cartas: \n");

//Entrada de dados da carta 1
printf("Carta 1 \n");

//Representação do estado por uma letra de 'A' a 'H'
printf("Insira uma letra de 'A' a 'H' para representar o estado a que a cidade pertence: \n");
scanf("%s", estado1);

//Código de identificação da carta, com uma letra seguida por dois dígitos
printf("Crie um código para identificação da carta. Ele deve começar pela letra maiúscula que representa o estado, seguida de um número de dois digitos de 01 a 04: \n");
scanf("%s", codigodacarta1);

//Nome da cidade
printf("Digite o nome da cidade: \n");
scanf("%s", cidade1);

//População da cidade
printf("Digite o número de habitantes da cidade: \n");
scanf("%lu", &populacao1);

//Área da cidade
printf("Digite a área da cidade em km²:\n");
scanf("%f", &area1);

//PIB da cidade
printf("Digite o PIB da cidade em bilhões de reais: \n");
scanf("%f", &pib1);
  

//Número de pontos turísticos da cidade
printf("Digite o número de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos1);

//Calculo de densidade e PIB per Capita Carta 1
densidade1 = (float) populacao1 / area1; 
pibpercapita1 = (float) (pib1 * 1000000000) / populacao1; 
  
//Calculo Super Poder carta 1
superPoder1 = populacao1 + (unsigned long int) area1 + (unsigned long int) pontosturisticos1+(unsigned long int) pib1  + (unsigned long int) densidade1 + (unsigned long int) pibpercapita1;

//Impressão dos dados da Carta 1
  printf("Carta 1:");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigodacarta1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.3f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibpercapita1);
 
  //Entrada de dados da carta 2
  printf("Carta 2 \n");

  //Representação do estado por uma letra de 'A' a 'H'
  printf("Insira uma letra de 'A' a 'H' para representar o estado a que a cidade pertence: \n");
  scanf("%s", estado2);

  //Código de identificação da carta, com uma letra seguida por dois dígitos
  printf("Crie um código para identificação da carta. Ele deve começar pela letra maiúscula que representa o estado, seguida de um número de dois digitos de 01 a 04: \n");
  scanf("%s", codigodacarta2);

  //Nome da cidade
  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade2);

  //População da cidade
  printf("Digite o número de habitantes da cidade: \n");
  scanf("%lu", &populacao2);

  //Área da cidade
  printf("Digite a área da cidade em km²:\n");
  scanf("%f", &area2);

  //PIB da cidade
  printf("Digite o PIB da cidade em bilhões de reais: \n");
  scanf("%f", &pib2);

  //Número de pontos turísticos da cidade
  printf("Digite o número de pontos turísticos da cidade: \n");
  scanf("%d", &pontosturisticos2);

  //Cálculo de densidade e PIB per Capita Carta 2
  densidade2 = (float) populacao2 / area2;
  pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;
  
//Calculo Super Poder carta 2
superPoder2 = populacao2 + (unsigned long int) area2 + (unsigned long int) pontosturisticos2 +(unsigned long int) pib2  + (unsigned long int) densidade2+ (unsigned long int) pibpercapita2;

  //Impressão de dados da carta 2
  printf("Carta 2:\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigodacarta2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.3f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibpercapita2);

//Comparação das cartas levando em conta o número de pontos turísticos
printf("Comparação das cartas (Atributo : Pontos Turisticos)\n");
printf("Carta 1 -  %s: %d pontos turisticos\n", cidade1, pontosturisticos1);
printf("Carta 2 -  %s: %d pontos turisticos\n", cidade2, pontosturisticos2);

if( pontosturisticos1 > pontosturisticos2) {
    printf("A carta 1 venceu\n");
}else {
    printf(" A carta 2 venceu\n");
}

  return 0;
}
