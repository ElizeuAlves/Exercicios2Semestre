#include <stdio.h>

void main()
{
    int $VETOR_NUM[20], $AUXILIAR_1 = 0, $AUXILIAR_2 = 19;

    for( int $CONTADOR = 0; $CONTADOR < 20; $CONTADOR++ )
    {
        $VETOR_NUM[$CONTADOR] = $CONTADOR;
    }

    printf("Sequência normal dos valores...\n");
    printf("\n");
    
    for( int $CONTADOR = 0; $CONTADOR < 20; $CONTADOR++ )
    {
        printf("Valor na posição %d: %d \n", $CONTADOR, $VETOR_NUM[$CONTADOR]);
    }

    printf("\nInvertendo valores dentro do vetor....\n");

    for( int $CONTADOR = 0; $CONTADOR < 10; $CONTADOR++ )
    {
        $AUXILIAR_1 = $VETOR_NUM[$CONTADOR];
        $VETOR_NUM[$CONTADOR] = $VETOR_NUM[$AUXILIAR_2];
        $VETOR_NUM[$AUXILIAR_2] = $AUXILIAR_1;
        $AUXILIAR_2--;
    }

    printf("\n");

    for( int $CONTADOR = 0; $CONTADOR < 20; $CONTADOR++ )
    {
        printf("Valor na posição %d: %d \n", $CONTADOR, $VETOR_NUM[$CONTADOR]);
    }
}