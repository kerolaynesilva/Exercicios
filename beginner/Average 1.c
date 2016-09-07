#include <stdio.h>
int main(){
    float A,B, media;
    printf("Digite duas notas de 1 a 10: ");
    scanf("%f", &A);
    scanf("%f", &B);
    media = (A*3.5 + B*7.5)/11;
    printf("MEDIA = %.5f", media);
    return 0;
}


