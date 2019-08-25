/*Crie um programa em C que receba a massa M, a acelera��o A, e as
posi��es iniciais (Pi) e finais (Pf) de um dado objeto e exiba o valor do trabalho W,realizado.
*/

#include<stdio.h>
int main ()
{
    float m, a, pi, pf, d, f, w;

    printf("Digite a massa, aceleracao e as posicoes iniciais (pi, pf):\n");
    scanf("%f %f %f %f", &m, &a, &pi, &pf);

    d = (pi - pf); //deslocamento
    f = (m*a); //for�a
    w = (f*d);

    printf("w=%.2f\n", w);

    return 0;
}
