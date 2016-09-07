#include <stdio.h>
int main(){
    int numero,horas;
    float valor,salario;
    printf("Digite o seu numero: ");
    scanf("%d", &numero);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Digite o valor que recebe por hora: ");
    scanf("%f", &valor);
    salario = valor*horas;
    printf("NUMERO = %d\nSALARIO = R$ %.2f\n" , numero,salario);
    return 0;
}

