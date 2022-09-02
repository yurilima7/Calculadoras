// Programa Calculadora em C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int menu (int escolha) //Funcao Menu de escolha
{
    printf ("\t\t*************************************\n");
    printf ("\t\t*                                   *\n");
    printf ("\t\t*             DIGITE                *\n");
    printf ("\t\t*                                   *\n");
    printf ("\t\t*           1 - Adicao              *\n");
    printf ("\t\t*           2 - Subtracao           *\n");
    printf ("\t\t*           3 - Multiplicacao       *\n");
    printf ("\t\t*           4 - Divisao             *\n");
    printf ("\t\t*           5 - Sair                *\n");
    printf ("\t\t*                                   *\n");
    printf ("\t\t*************************************\n\n");

    scanf ("%i", &escolha);

    system ("cls");

    return escolha;
}

void adicao (int opc) // Funcao adicao
{
    int v1, v2, soma; // Valor 1 e Valor 2

    printf ("Digite dois valores para a soma\n");
    scanf ("%i %i", &v1, &v2);
    system ("cls");

    soma = v1 + v2;
    printf ("%i + %i = %i\n", v1, v2, soma);
    system ("pause");
}

void subtracao (int opc) // Funcao subtracao
{
    int v1, v2, subtracao; // Valor 1 e Valor 2

    printf ("Digite dois valores para a subtracao\n");
    scanf ("%i %i", &v1, &v2);
    system ("cls");

    subtracao = v1 - v2;
    printf ("%i - %i = %i\n", v1, v2, subtracao);
    system ("pause"); 
}

void multiplicacao (int opc) // Funcao de multiplicacao
{
    int v1, v2, multiplicacao; // valor 1 e valor 2;

    printf ("Digite dois valores para a multiplicacao\n");
    scanf ("%i %i", &v1, &v2);
    system ("cls");

    multiplicacao = v1 * v2;
    printf ("%i * %i = %i\n", v1, v2, multiplicacao);
    system ("pause");
}

void divisao (int opc) // Funcao de divisao
{
    int v1, v2; // Valor 1 e Valor 2
    float divisao;

    printf ("Digite dois valores para a divisao\n");
    scanf ("%i %i", &v1, &v2);
    system ("cls");

    divisao = ((float)v1)/((float)v2);

    printf ("%i / %i = %.2f\n", v1, v2, divisao);
    system ("pause");
}

int main()
{
    int opc; // opc - opcao
    do  // Looping de escolha de operação
    {
        opc = menu (opc); // Chamando funcao Menu

        switch (opc) // Executando acao solicitada pelo usuario
        {
            case 1: // Caso adicao
            adicao (opc); // Chamando funcao adicao
            system ("cls");
            break;

            case 2: // Caso subtracao
            subtracao (opc); // Chamando funcao subtracao
            system ("cls");
            break;

            case 3: // Caso multiplicacao
            multiplicacao (opc); // Chamando funcao multiplicacao
            system ("cls");
            break;

            case 4: // Caso divisao
            divisao (opc); // Chamando funcao divisao
            system ("cls");
            break;

            case 5: // Caso de Encerramento do programa
            break;

            default:
            printf ("Operacao invalida! Tente novamente\n\n");
            break;
        }

    } while (opc != 5);

    return 0;
}