#include<stdio.h>
#include<math.h>

int main()
{

    float a, b, c, xp,xn,  delta, raiz, real, imag, imagp, imagn;

    printf("Digite os valores de a, b e c:\n"); //recebe os valores
    scanf("%f %f %f", &a, &b, &c);

    delta = (pow(b,2) - (4*a*c)); //calcula o delta

    raiz = sqrt(delta); //calcula a raiz quadrada de delta

    if(delta > 0) //DELTA POSITIVO
    {
        xp = ((-b) + raiz)/ 2*a; //raiz positiva
        xn = ((-b) - raiz)/2*a;  //raiz negativa

        printf("\nA equação tem raízes reais\nx1 = %.2f\nx2 = %.2f\n", xp, xn);
    }

    if(delta < 0) //DELTA NEGATIVO
    {

        real = ((-b)/2*a); //parte real

        printf("\nA equação tem raiz imaginaria\n\nParte real:\nx = %.0f\n",real);

        delta = -(delta);
        raiz = sqrt(delta);


        imag = ((-b)/2*a);
        imagp = + (raiz/2*a);
        imagn = - (raiz/2*a);


        if(imagp > 0 && imagn < 0)
        {
            printf("\nparte imaginaria\nx1 = %.0f + %.0fi\nx2 = %.0f %.0fi\n", imag,imagp,imag,imagn);

        }
        if(imagp < 0 && imagn > 0)
        {
            printf("\nparte imaginaria\nx1 = %.0f %.0fi\nx2 = %.0f + %.0fi\n", imag,imagp,imag,imagn);
        }

        if(imagn < 0 && imagp < 0)
        {
            printf("\nparte imaginaria\nx1 = %.0f %.0fi\nx2 = %.0f %.0fi\n", imag,imagp,imag,imagn);
        }
    }

    if(delta == 0)
    {
        xp = ((-b) + raiz)/ 2*a; //raiz positiva

        printf("\nA equação tem raiz DUPLA\nx = %.2f\n", xp);
    }

    return 0;
}
