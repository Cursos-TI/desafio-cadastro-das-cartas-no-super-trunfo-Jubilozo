#include <stdio.h>

//nivel aventureiro

int main() {
  // variaveis de cada cidade
    int n_pontos_t, populacao, n_pontos_t_2, populacao_2;
    float area, pib, area_2, pib_2;
    char nome[50], estado[50], codigo[50], nome_2[50], estado_2[50], codigo_2[50];
  // modificaçao aventureiro
    float pib_per_capita, pib_per_capita_2, densidade_p, densidade_p_2;
  //fim
   
 
  // Cadastro das Cartas:
    printf("a seguir voce vai descrever duas cidadem a partir de suas caracteristicas para transforma las em cartas \n");
    
    printf("vamos comecar com a carta n_1: \n");

    printf("primeiro digite a abreviaçao do estado em que ela reside: \n");
    scanf("%s", &estado);

    printf("em seguida use um numero qualquer em frente a abreviacao para criar o codigo da sua carta: \n");
    scanf("%s", &codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("agora digite a populacão total: \n");
    scanf("%d", &populacao);

    printf("a area da cidade: \n");
    scanf("%f", &area);

    printf("o pib bruto dela: \n");
    scanf("%f", &pib);

    printf("para finalizar, a quantidade de pontos turisticos: \n");
    scanf("%d", &n_pontos_t);

   

  //carta n_2
    printf("Agora vamos Para a carta n_2: \n");

    printf("primeiro digite a abreviaçao do estado em que ela reside: \n");
    scanf("%s", &estado_2);

    printf("em seguida use um numero qualquer em frente a abreviacao para criar o codigo da sua carta: \n");
    scanf("%s", &codigo_2);

    printf("digite o nome da cidade: \n");
    scanf("%s", &nome_2);

    printf("agora digite a populacão total: \n");
    scanf("%d", &populacao_2);

    printf("a area da cidade: \n");
    scanf("%f", &area_2);

    printf("o pib bruto dela: \n");
    scanf("%f", &pib_2);

    printf("para finalizar, a quantidade de pontos turisticos: \n");
    scanf("%d", &n_pontos_t_2);

  //dados armazenados 
    printf("aqui estao as informacoes da carta n_1:\n");

  // modificaçao aventureiro
    pib_per_capita = pib/populacao;
    densidade_p = populacao/area;
    pib_per_capita_2 = pib_2/populacao_2;
    densidade_p_2 = populacao_2/area_2;
  //fim
     
    printf("estado: %s \ncodigo: %s \nnome: %s \nn_populacao: %d \narea: %.2f \npib: %.2f \nn_pontos_t: %d\n", estado, codigo, nome, populacao, area, pib, n_pontos_t);

  // modificaçao aventureiro
    printf("pib_per_capita: %.2f\ndensidade_pupulacional: %.2f\n",pib_per_capita, densidade_p);
  //fim

    printf("aqui estao as informacoes da carta n_2:\n");
    printf("estado: %s \ncodigo: %s \nnome: %s \nn_populacao: %d \narea: %.2f \npib: %.2f \nn_pontos_t: %d\n", estado_2, codigo_2, nome_2, populacao_2, area_2, pib_2, n_pontos_t_2);

	// modificaçao aventureiro
	  printf("pib_per_capita_2: %.2f\ndensidade_pupulacional_2: %.2f\n",pib_per_capita_2, densidade_p_2);
    //fim

    return 0;
}