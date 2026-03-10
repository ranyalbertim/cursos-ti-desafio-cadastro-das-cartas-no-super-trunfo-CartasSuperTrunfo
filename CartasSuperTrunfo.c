#include <stdio.h> 

// Desafio Super Trunfo - Países 
// Tema 1 - Cadastro das Cartas 

int main() { 

//VARIAVEIS DA CARTA 1 

char estado1; 
char codigocarta1 [50]; 
char nomecidade1 [50]; 
int populacao1; 
float area1; 
float PIB1; 
int turismo1; 

//VARIAVEIS DA CARTA 2 

char estado2; 
char codigocarta2 [50]; 
char nomecidade2 [50]; 
int populacao2; 
float area2; 
float PIB2; 
int turismo2; 

//ENTRADA DE DADOS 

//Carta 1 

printf ("Cadastrando a carta 1\n"); 

printf ("Digite o nome do estado\n"); 
scanf (" %c", &estado1); 

printf ("Digite o código da carta 1\n"); 
scanf (" %s", codigocarta1); 

printf("Digite o nome da cidade\n"); 
scanf(" %s", nomecidade1); 

printf("Digite o número de habitantes\n"); 
scanf("%d", &populacao1); 

printf("Digite a area em km²\n"); 
scanf("%f", &area1); 

printf("Digite o PIB\n"); 
scanf("%f", &PIB1); 

printf("Digite o número de pontos turísticos\n"); 
scanf("%d", &turismo1); 


//Carta 2 

printf ("Cadastrando a carta 2\n"); 

printf ("Digite o nome do estado\n"); 
scanf (" %c", &estado2); 

printf ("Digite o código da carta 2\n"); 
scanf (" %s", codigocarta2); 

printf("Digite o nome da cidade\n"); 
scanf(" %s", nomecidade2); 

printf("Digite o número de habitantes\n"); 
scanf("%d", &populacao2); 

printf("Digite a area em km²\n"); 
scanf("%f", &area2); 

printf("Digite o PIB\n"); 
scanf("%f", &PIB2); 

printf("Digite o número de pontos turísticos\n"); 
scanf("%d", &turismo2); 

// Exibição dos Dados das Cartas: 
//Carta 1 

printf("Carta 1\n"); 

printf("Estado: %c\n", estado1); 

printf("Código da carta: %s\n", codigocarta1); 

printf("Nome da cidade: %s\n", nomecidade1); 

printf("População: %d\n", populacao1); 

printf("Área da cidade: %.2f km²\n", area1); 

printf("PIB: %.2f milhões de reais\n", PIB1); 

printf("Número de pontos turísticos: %d\n", turismo1); 



//Carta 2 

printf("Carta 2\n"); 

printf("Estado: %c\n", estado2); 

printf("Código da carta: %s\n", codigocarta2); 

printf("Nome da cidade: %s\n", nomecidade2); 

printf("População: %d\n", populacao2); 

printf("Área da cidade: %.2f km²\n", area2); 

printf("PIB: %.2f milhões de reais\n", PIB2); 

printf("Número de pontos turísticos: %d\n", turismo2); 



printf("Fim do cadastro das cartas!\n"); 


return 0; 

} 

