
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main ()
{
  int tempo;
  char mat [31], nome [31];
  float valor1, valor2, valor3, com1, com2, com3,total;
  setlocale(LC_ALL,"");
    printf ("Digite a Matricula do Vendedor: ");
        gets(mat);
    printf ("Digite o nome do Vendedor: ");
        gets(nome);
    printf ("Digite o tempo de casa: ");
        scanf ("%d",&tempo);
    printf ("\nDigite o Valor do mes 1: ");
        scanf ("%f",&valor1);
    printf ("Digite o Valor do mes 2: ");
        scanf ("%f",&valor2);
    printf ("Digite o Valor do mes 3: ");
        scanf ("%f",&valor3);
           if (tempo >= 10){
                com1 =(valor1*0.10);
                com2 =(valor2*0.12);
                com3 =(valor3*0.15);}
            else{
                com1 =(valor1*0.10);
                com2 =(valor2*0.10);
                com3 =(valor3*0.10);}
    printf ("\nMaticula:     %s",mat);
    printf ("\nNome:         %s",nome);
    printf("\nTempo de casa:     %d\n",tempo);
    printf ("\nValor Mes 1 R$ :     %3.2f",valor1);
    printf ("\nValor Mes 2 R$ :     %3.2f",valor2);
    printf ("\nValor Mes 3 R$:     %3.2f\n",valor3);
        printf ("\nValor Comissao mes 1 R$ : %3.2f",com1);
        printf ("\nValor Comissao mes 2 R$ : %3.2f",com2);
        printf ("\nValor Comissao mes 3 R$ : %3.2f\n",com3);
    printf ("\nValor Total da Comissao R$ : %3.2f" ,(com1+com2+com3));
    printf ("\n\n\n");
  system ("pause");
 return (0);
}

