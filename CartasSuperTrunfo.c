#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    printf("Desafio Cartas Super Trunfo!!\n");
    printf("\n");
    printf("BRASIL\n");
    printf("\n");
    printf("Estados A=Santa Catarina\n");
    printf("Estados B=Paraná\n");
    printf("Estados C=Rio Grande do Sul\n");
    printf("Estados D=São Paulo\n");
    printf("Estados E=Rio de Janeiro\n");
    printf("Estados F=Minas Gerais\n");
    printf("Estados G=Mato Grosso do Sul\n");
    printf("Estados H=Goiais\n");
    printf("\n");
    printf("CARTA\n");                                       //Melhorar a visual do terminal.
    
    int tur = 10;                                        //PONTOS TURÍSTCOS 
    int habitantes = 195753;                           //POPULAÇÃO
    double area = 530.90;                               //AREA
    double pib = 65295.54;                              //PIB
    char codigo = 'A';                                  //CODIGO REFERENTE AO PAÍS
    int numero = 1;                                     //CODIGO REFERENTE AO ESTADO
    char nome[30] = "JARAGUA DO SUL";                   //NOME DA CARTA
 

    printf("Cidade:  %s\n", nome);
    printf("Codigo da cidade: %c-%d\n", codigo,numero);
    printf("Pontos de turismo: %d locais\n", tur);
    printf("População: %d habitantes\n", habitantes);
    printf("Area Total: %.2f km²\n", area);
    printf("PIB: %.2f R$\n", pib);
    printf("\n");                                        //Apenas pra me localizar melhor no terminal.


    
    
    //PROMIXA CARTA 
    printf("CARTA\n");                                   //Melhorar a visual do terminal.
    
    int tur1 = 7;                                         //PONTOS TURÍSTCOS 
    int habitantes1 = 46099;                            //POPULAÇÃO
    double area1 =  128.40;                               //AREA
    double pib1 = 55453.40;                                   //PIB
    char codigo1 = 'A';                                   //CODIGO REFERENTE AO PAÍS
    int numero1 = 2;                                      //CODIGO REFERENTE AO ESTADO
    char nome1[30] = "TIMBÓ";                             //NOME DA CARTA
 
    printf("Cidade:  %s\n", nome1);
    printf("Codigo da cidade: %c-%d\n", codigo1,numero1);
    printf("Pontos de turismo: %d locais\n", tur1);
    printf("População: %d habitantes\n", habitantes1);
    printf("Area Total: %.2f km²\n", area1);
    printf("PIB: %.2f R$\n", pib1);
    printf("\n");               


     //PROMIXA CARTA 
    printf("CARTA\n");                                   //Melhorar a visual do terminal.
    
    int tur2 = 7;                                       //PONTOS TURÍSTCOS 
    int habitantes2 = 46099;                            //POPULAÇÃO
    double area2 =  128.40;                             //AREA
    double pib2 = 55453.40;                             //PIB
    char codigo2 = 'A';                                 //CODIGO REFERENTE AO PAÍS
    int numero2 = 2;                                    //CODIGO REFERENTE AO ESTADO
    char nome2[30] = "TIMBÓ";                           //NOME DA CARTA
 
    printf("Cidade:  %s\n", nome2);
    printf("Codigo da cidade: %c-%d\n", codigo2,numero2);
    printf("Pontos de turismo: %d locais\n", tur2);
    printf("População: %d habitantes\n", habitantes2);
    printf("Area Total: %.2f km²\n", area2);
    printf("PIB: %.2f R$\n", pib2);
    printf("\n");     

     //PROMIXA CARTA 
    printf("CARTA\n");                                   //Melhorar a visual do terminal.
    
    int tur3 = 42;                                        //PONTOS TURÍSTCOS 
    int habitantes3 = 537211;                             //POPULAÇÃO
    double area3 =  675.40;                               //AREA
    double pib3 = 45602.98;                               //PIB
    char codigo3 = 'A';                                   //CODIGO REFERENTE AO PAÍS
    int numero3 = 3;                                      //CODIGO REFERENTE AO ESTADO
    char nome3[30] = "FLORIANÓPOLIS";                     //NOME DA CARTA
 
    printf("Cidade:  %s\n", nome3);
    printf("Codigo da cidade: %c-%d\n", codigo3,numero3);
    printf("Pontos de turismo: %d locais\n", tur3);
    printf("População: %d habitantes\n", habitantes3);
    printf("Area Total: %.2f km²\n", area3);
    printf("PIB: %.2f R$\n", pib3);
    printf("\n");               

    
    
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
