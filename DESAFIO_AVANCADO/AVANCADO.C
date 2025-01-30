#include <stdio.h>
#include <string.h>

//CARTA 1 VARIAVEIS
int populacao1, qtdpturistico1;
float area1, pib1, densi1, per1 ;
char cidade1[50], estado1[50], pais1[50], opcao;
char codcid1 = '1', codest1 = 'A';


void cadastro(){
    //COLETA DE DADOS CADASTRAIS
    printf("---- CADASTRO DE CIDADES ----\n");
    printf("Digite o nome da cidade: \n");
    fgets(cidade1, 50, stdin);
    cidade1[strlen(cidade1)-1] = '\0';

    printf("Digite o nome da federacao a que essa cidade pertence: \n");
    fgets(estado1, 50, stdin);
    estado1[strlen(estado1)-1] = '\0';

    printf("Digite o nome do pais referente a essa cidade: \n");
    fgets(pais1, 50, stdin);
    pais1[strlen(pais1)-1] = '\0';

    // COLETA DE DADOS COMPARATIVOS
    printf("---- FORMULACAO DA CARTA ----\n");
    printf("Informe qual e o numero populacional referente a essa cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe qual e o PIB dessa cidade: \n");
    scanf("%f", &pib1);

    printf("Informe qual a area dessa cidade: \n");
    scanf("%f", &area1);

    printf("Informe qual e a quantidade de pontos turistios na cidade: \n");
    scanf("%d", &qtdpturistico1);
    printf("INFORMACOES CADASTRADAS COM SUCESSO!!\n\n"); 
}


void exibicao(){
    //CONTA DENSIDADE DEMOGRAFICA
    float densi1 = (float) populacao1 / area1;
    //CONTA PIB PER CAPITA
    float per1 = (float) pib1 / populacao1;

    //EXIBICAO DA CARTA
    printf("---- CARTA %c%c %s ----\n",codest1 ,codcid1, cidade1);
    printf("CODIGO: %c%c\nCIDADE: %s\nESTADO: %s\nPAIS: %s\n", codest1, codcid1, cidade1, estado1, pais1);
    printf("NUMERO POPULACIONAL: %d\n", populacao1);
    printf("PIB: %.3f BILHOES DE REAIS\n", pib1);
    printf("AREA: %.3f KM^2\n", area1);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n",qtdpturistico1);
    printf("DENSIDADE: %.3f\n", densi1);
    printf("PIB PER CAPITA: %.3f\n", per1);
       
}


int main(){
    cadastro();
    exibicao();

    return 0;  
}