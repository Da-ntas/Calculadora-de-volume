#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, larg, alt, raio, PI, cb, p, ci, E;
    char formato;
    printf("Digite 1(para cubo), 2(para paralelepipedo), 3(para cilindro): ");
    scanf ("%s", &formato);
    while (formato != 'E'){
        switch (formato){
            case '1':
                printf ("\nDigite a medida do lado: ");
                scanf ("%f", &lado);
                cb = lado*lado*lado;
                printf ("\nVolume do cubo: %2.f", cb);
                break;
            case '2':
                printf ("\nDigite a largura: ");
                scanf ("%f", &larg);
                printf ("\nDigite a altura: ");
                scanf ("%f", &alt);
                p = larg*alt;
                printf ("\nVolume do paralelepipedo: %2.f", p);
                break;
            case '3':
                printf ("\nDigite o valor adotado para PI: ");
                scanf("%f", &PI);
                printf ("\nDigite o raio: ");
                scanf("%f", &raio);
                printf ("\nDigite a altura: ");
                scanf("%f", &alt);
                ci = PI * (raio*raio) * alt;
                printf ("\nVolume do cilindro: %2.f", ci);
                break;
            default:
                printf ("\nO que foi digitado nao e valido.");
            break;
        }
        printf("\n\nDigite 1(para cubo), 2(para paralelepipedo), 3(para cilindro), ou digite 'E' para sair: ");
        scanf ("%s", &formato);
    }
}
