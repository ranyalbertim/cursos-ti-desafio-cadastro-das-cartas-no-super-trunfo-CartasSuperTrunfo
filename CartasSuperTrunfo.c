#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //VARIAVEIS DA CARTA 1
    char estado1;
    char codigocarta1 [10];
    char nomecidade1 [20];
    int popoulacao1;
    float area1;
    float PIB1;
    int turismo1;

    //VARIAVEIS DA CARTA 2
    char estado2;
    char codigocarta2 [10];
    char nomecidade2 [20];
    int popoulacao2;
    float area2;
    float PIB2;
    int turismo2;

    //ENTRADA DE DADOS

    //Carta 1
    printf ("Cadastrando a carta 1\n");

    printf ("Digite o nome do estado\n");
    scanf ("%c", &estado1);

    printf ("Digite o código da carta 1\n");
    scanf ("%c", &codigocarta1);

    printf("Digite o nome da cidade\n");
    scanf("%s" &nomecidade1);

    printf("Digite o número de habitantes\n");
    scanf("%d", &popoulacao1);

    printf("Digite a area em km²\n");
    scanf("%f", &area1);

    printf("Digite o PIB\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &turismo1);

    //Carta 2
     printf ("Cadastrando a carta 2\n");

     printf ("Digite o nome do estado\n");
    scanf ("%c", &estado2);

    printf ("Digite o código da carta 1\n");
    scanf ("%c", &codigocarta2);

    printf("Digite o nome da cidade\n");
    scanf("%s" &nomecidade2);

    printf("Digite o número de habitantes\n");
    scanf("%d", &popoulacao2);

    printf("Digite a area em km²\n");
    scanf("%f", &area2);

    printf("Digite o PIB\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &turismo2);



    //cadastro da carta 1 





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
