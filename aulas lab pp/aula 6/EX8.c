/*8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado.*/
#include <stdio.h>

int main ()
{
    int vetor [10]; //vetor
    int i, j; //indices

    for (i = 0; i < 10; i++)
    {
        printf ("Digite um numero: ");
        scanf ("%d", &vetor[i]);

        for (j = 0; j < 10; j++)
        {
            if ((vetor [i] == vetor[j]) && (i != j))
            {
                printf ("numero repetido, digite novamente: ");
                scanf ("%d", &vetor[i]);
                j = 0;
            }
        }
    }

    printf ("\n");

    for (i = 0; i < 10; i++)
    {
        printf ("%d ", vetor[i]);
    }

    return 0;
}