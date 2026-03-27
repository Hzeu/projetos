/*
 * nome joao vitor de jesus santana
 * objetivo ; fazer um projeto de cadastramento de cliente simples
 */
#include <stdio.h>
int main()
{
    // declaracao de variveis
    char cpf[12];
    int senha;
    char consulta;
    char apagar;
    char dados[50];

    // imformacao do usuario
    printf("|---------------------------------------------------------------|\n");
    printf("|para realizar o cadastro digite seus dados abaixo \n");
    printf("|---------------------------------------------------------------|\n");
    printf("digite seu cpf\n");
    scanf("%s", cpf);
    printf("escreva uma senha numeral\n");
    scanf("%d", &senha);
    printf("dados cadrastrados no sistma ,deseja consultar?\n (s ou n?)\n");
    scanf(" %c", &consulta);
    printf("|---------------------------------------------------------------|\n");
    
    // CONDICOES DO USUARIO PARA REALIZAR AS CONSULTAS 
    //  E O POSSIVEL APAGAMNETO DO DADOS 
    
    if (consulta == 's') {

        printf("seu cpf e :%s\n sua senha e %d \n", cpf, senha);

        printf("deseja apagar os dados?,(S ou N)\n");
        scanf(" %c", &apagar);

        if (apagar == 's'){
        printf("dados apagagos\n");
        
        }else if (apagar == 'n'){
         printf("dados seram mantidos\n");
        } else {
            printf("opcao invalida\n");      // CASO ELE APERTE QUALAQUER OUTRA COISA 
        } 

    }  else if (consulta == 'n'){
        printf("tenha um bom dia");
    } else{
        printf("opcao invalida");             // MESMA COISA 
    }
    
    
    
    

    return 0;
}