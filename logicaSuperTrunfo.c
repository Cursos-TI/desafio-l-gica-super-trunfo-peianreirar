#include <stdio.h>

int main() {
    //Declaração de variáveis carta 1

    char estado, codigo[4], nome[50];
    int  PontosTuristicos;
    float area, PIB;
    float densidade, pibPerCapta; //Declaração de novas variáveis - Nivel aventureiro
    unsigned long int populacao; // nova variável para população, agora com modificador - Nivel mestre
    float superPoder; // Nova variável
    int pontosCarta1 = 0; //nova variável que será usada para comparar as cartas

    //Declaração de variáveis carta 2

    char estado2, codigo2[4], nome2[50];
    int  Pontosturisticos2;
    float area2, PIB2;
    float densidade2, pibPerCapta2; //Declaração de novas variáveis - Nivel aventureiro 
    unsigned long int populacao2;  // nova variável para população, agora com modificador - Nivel mestre
    float superPoder2; // Nova variável
    int pontosCarta2 = 0; //nova variável que será usada para comparar as cartas


    //Entrada de dados da carta 1 

    printf("Digite uma letra que represente o estado da carta 1 (de A a H): \n");
    scanf(" %c", &estado);

    printf("Digite o código da carta 1 (letra que represente o estado + um número de 1 a 4): \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &PontosTuristicos);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB);

    //Entrada de dados carta 2

    printf("Digite uma letra que represente o estado da carta 2 (de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 (letra que represente o estado + um número de 1 a 4): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &Pontosturisticos2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &PIB2);

    //Cálculo da densidade populacional e PIB per capta da carta 1

    densidade = (float) populacao / area;
    pibPerCapta = (float) PIB / populacao;

    //Cálculo da densidade populalcional e PIB per capta da carta 2

    densidade2 = (float) populacao2 / area2;
    pibPerCapta2 = (float) PIB2 / populacao2;

    // Cálculo do super poder da carta 1 

    superPoder = (float) populacao + area + PIB + PontosTuristicos + pibPerCapta + (1.0f / densidade);

    // Cálculo do super poder da carta 2

    superPoder2 = (float) populacao2 + area2 + PIB2 + Pontosturisticos2 + pibPerCapta2 + (1.0f / densidade2);

    //Exibição de dados da carta 1 

    printf("\n---Dados da carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome: %s \n", nome);
    printf("População: %lu \n", populacao);
    printf("Pontos turísticos: %d \n", PontosTuristicos);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Densidade populacional: %.2f \n", densidade);
    printf("PIB per capta: %.2f \n", pibPerCapta);

    //Exibição de dados da carta 2

    printf("\n---Dados da carta 2:---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Pontos turísticos: %d \n", Pontosturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("PIB per capta: %.2f \n", pibPerCapta2);

    // comparação de cartas usando verdadeiro ou falso (1 ou 0)

/*    printf("\n---Comparação de cartas---\n");
    printf("População: carta 1 venceu (%d) \n", populacao > populacao2);
    printf("Área: carta 1 venceu (%d) \n", area > area2);
    printf("PIB: carta 1 vendeu (%d) \n", PIB > PIB2);
    printf("Pontos turísticos: carta1 venceu (%d) \n", PontosTuristicos > Pontosturisticos2);
    printf("Densidade populacional: Carta 1 venceu (%d) \n", densidade < densidade2); //vence o menor
    printf("PIB per capta: carta 1 venceu (%d) \n", pibPerCapta > pibPerCapta2);
    printf("Super poder: carta 1 venceu (%d) \n", superPoder > superPoder2);
*/

    // comparação de cartas usando if else
    if (populacao > populacao2){
        printf("A cidade 1 tem a população maior que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem a população maior que a cidade 1.\n");
        pontosCarta2++;
    }
    if (area > area2){
        printf("A cidade 1 tem a área maior que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem a área maior que a cidade 1.\n");
        pontosCarta2++;
    }
    if (PIB > PIB2){
        printf("A cidade 1 tem o PIB maior que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem o PIB maior que a cidade 1.\n");
        pontosCarta2++;
    }
    if (PontosTuristicos > Pontosturisticos2){
        printf("A cidade 1 tem mais pontos túristicos que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem mais pontos túristicos que cidade 1.\n");
        pontosCarta2++;
    }
    if (densidade < densidade2){ //menor vence
        printf("A cidade 1 tem densidade populacional menor que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem densidade populacional menor que cidade 1.\n");
        pontosCarta2++;
    }
    if (pibPerCapta > pibPerCapta2){
        printf("A cidade 1 tem o PIB per capta maior que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem o PIB per capta maior que a cidade 1.\n");
        pontosCarta2++;
    }
    if (superPoder > superPoder2){
        printf("A cidade 1 tem o super poder maior que a cidade 2.\n");
        pontosCarta1++;
    }
    else{
        printf("A cidade 2 tem o super poder maior que a cidade 1.\n");
        pontosCarta2++;
    }

    // resultado final da comparação
    printf("\n---Resultado---\n");
    if (pontosCarta1 > pontosCarta2) {
        printf("A carta 1 (%s) é a vencedora, com %d atributos vencidos\n", nome, pontosCarta1);
    }
    else {
        printf("A carta 2 (%s) é a vencedora, com %d atributos vencidos.\n", nome2, pontosCarta2);
    }






    return 0;
}
