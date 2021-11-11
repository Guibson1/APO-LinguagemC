#include  <stdio.h>
#include <locale.h>
main(){

 float idade;

    printf ("Digite a idade ");
    scanf("%f", &idade);
   
    

    if (idade < 16)  {

    printf ("Não votante\n");
    }
    else 
        if (idade >= 18 && idade <= 65) {
    printf ("Eleitor obrigatorio\n");
        }
        else{
            printf (" Voto Facultativo \n");
        }
}