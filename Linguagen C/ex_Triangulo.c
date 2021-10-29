
#include  <stdio.h>
#include <locale.h>
main(){

 float ladoA, LadoB, LadoC;

    setlocale (LC_ALL, "Portuguese");
    printf ("A = ");
    scanf("%f", &ladoA);
    printf ("B = ");
    scanf("%f", &LadoB);
    printf ("C = ");
    scanf("%f", &LadoC);
    

    if (ladoA < LadoB + LadoC && LadoB < ladoA + LadoC && LadoC < LadoB + ladoA)  {

    printf ("É um triângulo\n");
    }
    else 
        if (ladoA == LadoB && LadoB == LadoC) {
    printf ("Triângulo Equilátero\n");
        }
        else 
            if (ladoA != LadoB && LadoB != LadoC && LadoC != ladoA) {
                printf ("Triângulo Escaleno\n");
            }
        else{
            printf (" Não é um Triângulo \n");
        }
}