#include <stdio.h>
#include <string.h>
int main(){
    char nome[20];
    float salario,vendas;
    double total;
    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o salario fixo: ");
    scanf("%f", &salario);
    printf("Digite o total de vendas: ");
    scanf("%f", &vendas);
    total = salario+(0.15)*vendas;
    printf("TOTAL = R$ %.2f", total);
    return 0;
}

