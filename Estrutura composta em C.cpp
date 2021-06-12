/* Estrutura condicional composta em C */
#include <stdio.h> /* esta instrucao insere o conteudo do
arquivo stdio.h */
#include <math.h> /*insere o conteudo do arquivo math, que
tem a funcao sqrt que efetua o calculo da raiz quadrada */
main () /* todo programa em C deve possuir essa linha */
{ /* delimita o inicio das instrucoes */
int quadrado, num;
float raiz;
printf(" Digite um numero inteiro:");
scanf ("%d", &num);
if (num % 2 == 0 )
{
raiz = sqrt(num);
printf ("O numero e par");
printf ("\nA raiz quadrada e: %.3f", raiz);
}
else
{
quadrado = num * num;
printf ("O numero e impar");
printf ("\nO numero ao quadrado e: %d", quadrado);
}
return (0); /* este retorno indica que nao houve erro */
} /*delimite o fim do conjunto de instrucoes da funcao main */
