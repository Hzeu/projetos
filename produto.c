/*
 *joao vitor de jesus santana
 * objetivo e fazer o cadratro de um produto*/
#include <stdio.h>
int main()
{
    // declaraco de variaveis
    char nome[50];
    float valor;
    int quantidade;
    float total;
    char consulta;
    // informacoes do usuario

    printf("para cadastra um produto digite abaixo as informacoes\n"); // pra dar uma diferenciada 
    printf("digite o nome do produto\n");
    scanf("%s", nome);
    printf(" digite o valor do seu produto\n");
    scanf("%f",&valor);
    printf("digite a quantidade de produto \n");
    scanf("%d",&quantidade);
    // cauculo 
    total=valor*quantidade;
    // imprinmindo as informacoes na tela 
    printf("produto cadstrado com sucesso ,quer consultar\n?(s ou n?)\n");
    scanf("%s",&consulta);
    if (consulta == 's'){
        printf("seu produto e :%s \n com um valor total = %.2f\n",nome ,total);
    }else if(consulta == 'n'){
        printf("tenh um bom dia \n");
    }else{
        printf("opsao invalida\n");
    }
   


        return 0;
}