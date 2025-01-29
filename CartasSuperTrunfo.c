#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int Populacao, qtdpturistico, opcao;
    float area, pib;
    char cidade[50], estado[50], pais[50];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("---- CADASTRO DE CIDADES ----\n");
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite o nome da federacao a que essa cidade pertence: \n");
    scanf("%s", estado);

    printf("Digite o nome do pais referente a essa cidade: \n");
    scanf("%s", pais);

    printf("Confirme as informacoes para continuarmos o cadastro: \n");
    printf("a cidade cadastrada e: %s\nO estado cadastrado e: %s\nO país cadastrado e: %s\n", cidade, estado, pais);
    printf("Precisa alterar alguma informacao? 1 para sim/0 para nao\n");
    scanf("%d", opcao);

     //loop de atualização de informação
        while (opcao >= 1)
        {
            printf("---- FORMULACAO DA CARTA ----\n");
            printf("Informe qual e o numero populacional referente a essa cidade: \n");
            scanf("%d", Populacao);

            printf("Informe qual e o PIB dessa cidade: \n");
            scanf("%f", pib);

            printf("Informe qual a area dessa cidade: \n");
            scanf("%f", area);

            printf("Informe qual e a quantidade de pontos turistios na cidade: \n");
            scanf("%d", qtdpturistico);

            printf("Confirme as informacoes para continuarmos o cadastro: \n");
            printf("O numero populacional e: %d\nO PIB e: %f\nA area e: %f m³\nA cidae possue %d pontos turisticos\n", Populacao, pib, area, qtdpturistico); 
            printf("Precisa alterar alguma informacao? 1 para sim/0 para nao\n");
            scanf("%d", opcao);
        }
    //loop de novo cadastro

    printf("Deseja realizar mais um cadastro? 1 para sim/0 para nao");
    scanf("%d", opcao);
        while(opcao >= 1)
        {
                //Coleta das informaçoes cadastrais
            printf("---- CADASTRO DE CIDADES ----\n");
            printf("Digite o nome da cidade: \n");
            scanf("%s", cidade);

            printf("Digite o nome da federacao a que essa cidade pertence: \n");
            scanf("%s", estado);

            printf("Digite o nome do pais referente a essa cidade: \n");
            scanf("%s", pais);

            printf("Confirme as informacoes para continuarmos o cadastro: \n");
            printf("a cidade cadastrada e: %s\nO estado cadastrado e: %s\nO pais cadastrado e: %s\n", cidade, estado, pais);
            printf("Precisa alterar alguma informacao? 1 para sim/0 para nao\n");
            scanf("%d", opcao);
                while (opcao >= 1)
                {
                    printf("---- CADASTRO DE CIDADES ----\n");
                    printf("Digite o nome da cidade: \n");
                    scanf("%s", cidade);

                    printf("Digite o nome da federacao a que essa cidade pertence: \n");
                    scanf("%s", estado);

                    printf("Digite o nome do pais referente a essa cidade: \n");
                    scanf("%s", pais);

                    printf("Confirme as informacoes para continuarmos o cadastro: \n");
                    printf("a cidade cadastrada e: %s\nO estado cadastrado e: %s\nO país cadastrado e: %s\n", cidade, estado, pais); 
                    printf("Precisa alterar alguma informacao? 1 para sim/0 para nao\n");
                    scanf("%d", opcao); 
                }
                
        //Coleta dos dados de comparações
            printf("---- FORMULACAO DA CARTA ----\n");
            printf("Informe qual e o numero populacional referente a essa cidade: \n");
            scanf("%d", Populacao);

            printf("Informe qual e o PIB dessa cidade: \n");
            scanf("%f", pib);

            printf("Informe qual a area dessa cidade: \n");
            scanf("%f", area);

            printf("Informe qual e a quantidade de pontos turistios na cidade: \n");
            scanf("%d", qtdpturistico);

            printf("Confirme as informacoes para continuarmos o cadastro: \n");
            printf("O numero populacional e: %d\nO PIB e: %f\nA area e: %f m³\nA cidae possue %d pontos turisticos\n", Populacao, pib, area, qtdpturistico); 
            printf("Precisa alterar alguma informação? 1 para sim/0 para nao\n");
            scanf("%d", opcao); 
                while (opcao >= 1)
                {
                    printf("---- FORMULACAO DA CARTA ----\n");
                    printf("Informe qual e o numero populacional referente a essa cidade: \n");
                    scanf("%d", Populacao);

                    printf("Informe qual e o PIB dessa cidade: \n");
                    scanf("%f", pib);

                    printf("Informe qual a area dessa cidade: \n");
                    scanf("%f", area);

                    printf("Informe qual e a quantidade de pontos turistios na cidade: \n");
                    scanf("%d", qtdpturistico);

                    printf("Confirme as informacoes para continuarmos o cadastro: \n");
                    printf("O numero populacional e: %d\nO PIB e: %f\nA area e: %f m³\nA cidae possue %d pontos turisticos\n", Populacao, pib, area, qtdpturistico); 
                    printf("Precisa alterar alguma informação? 1 para sim/0 para nao\n");
                    scanf("%d", opcao);
                    printf("Deseja realizar mais um cadastro? 1 para sim/0 para nao\n");
                    scanf("%d", opcao);
        }

        
        printf("cadastro concluido com sucesso\n");
        return 0;
     }