#include <stdio.h>
#include <stdlib.h>
//Inclusão Biblioteca Math - autorizada //
#include <math.h>
//Configuração idioma Português - para mensagens com usuário//
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"portuguese");

    int i, contador, tamanho;
    float soma=0, media=0, mediana=0, aux, soma2=0, aux2, variancia, desvioPDP;

    //Entrada dos dados//
    printf ("\nQuantos números na sua série (N):");
    scanf ("%i", &tamanho);

    float numeros[tamanho];
    printf ("Entre com os números:");
    for (i=0 ; i<tamanho; i++)
    {
        printf ("\n> ");
        scanf ("%f", &numeros[i]);
        soma = soma + numeros[i];
        media = soma/tamanho;

    }
    for (i=0; i<tamanho; i++)
    {
        soma2 = pow((numeros[i]-media),2);
        aux2 = soma2 + aux2;
    }
    //printf ("\nsoma2 %.13f", aux2);

    //Cálculo da Variância//
    variancia = aux2/(tamanho-1);
    //printf ("\nVariancia %.13f", variancia);

    //Cálculo do desvio Padrão Populacional//
    desvioPDP = sqrt(variancia);

    //Colocando registros em ordem crescente//
    //printf ("\nOrdem Atual :\n");//
    for (i=0; i<tamanho; i++)
        {
        //printf (" %.1f", numeros[i]);//
        }
        //Bublesort//
        for (contador =1; contador<tamanho; contador++)
        {
        for (i=0; i<tamanho-1; i++)
            {
            if (numeros[i]>numeros[i+1])
                {
                    aux = numeros [i];
                    numeros[i] = numeros[i+1];
                    numeros[i+1] = aux;
                }
            }
        }
        for (i=0; i<tamanho; i++)
            {
                //printf(" %.1f", numeros[i]);//
                mediana = (numeros[tamanho/2-1]+numeros[tamanho/2])/2;
            }
         //Impressões em tela//
    printf ("\n");
    printf ("\nValor mínimo: %.1f", numeros[0]);
    printf ("\nValor Máximo: %.0f", numeros[tamanho-1]);
    //printf ("\nSoma: %.2f", soma);//
    printf ("\nMédia: %.2f", media);
    printf ("\nMediana: %.2f", mediana);
    printf ("\nDesvio padrão: %.13f", desvioPDP);
    printf ("\n");
return 0;
}
