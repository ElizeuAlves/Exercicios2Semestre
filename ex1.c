#include <stdio.h>

void main()
{
    int $VETOR_NUM[10], $MAIOR_VALOR = 0, $MENOR_VALOR = 0;
    for( int contador = 0; contador < 10; contador++ )
    {
        printf("Digite um valor para a posicao %d: ", contador);
        scanf("%d",&$VETOR_NUM[contador]);

        contador == 0 ? $MAIOR_VALOR = $VETOR_NUM[contador] : NULL;
        contador == 0 ? $MENOR_VALOR = $VETOR_NUM[contador] : NULL;

        $VETOR_NUM[contador] > $MAIOR_VALOR ? $MAIOR_VALOR = $VETOR_NUM[contador] : NULL;
        $VETOR_NUM[contador] < $MENOR_VALOR ? $MENOR_VALOR = $VETOR_NUM[contador] : NULL;
    }
    
    system("clear");

    printf("Maior valor: %d\nMenor valor: %d\n", $MAIOR_VALOR, $MENOR_VALOR);
}