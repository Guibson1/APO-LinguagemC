#include  <stdio.h>
#include <locale.h>
main(){

 float nota1, nota2, media=0.0;

    setlocale (LC_ALL, "Portuguese");
    printf ("Nota do Aluno 1: ");
    scanf("%f", &nota1);
    printf ("Nota do Aluno 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;
    

    if (media >=7.0){
    printf ("Aluno Aprovado\n");
    printf ("Parabéns\n");
    }
    else 
        if (media >=5.0 && media <7.0) {
    printf ("Aluno de exame\n");
    printf ("Aproveite esta oportunidade\n");
        }
        else{
            printf ("Aluno Reprovado\n");
             printf ("Estude mais\n");
            }
       
}