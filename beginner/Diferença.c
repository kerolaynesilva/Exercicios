#include <stdio.h>
#define pi 3.14159
int main(){
    float R;
    double A;
    printf("Digite o valor do raio: ");
    scanf("%f", &R);
    A = pi*R*R;
    printf("A = %.4f", A);
    return 0;
}
