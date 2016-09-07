#include <stdio.h>
int main(){
    float A,B,C,media;
    printf("Digite tres notas de 1 a 10: ");
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    media = (A*2 + B*3 +C*5)/10;
    printf("MEDIA = %.1f", media);
    return 0;
}



