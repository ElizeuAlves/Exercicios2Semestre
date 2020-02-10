#include <stdio.h>

void main()
{
    int $VETOR_NUM_ALUNO[10], $ALUNO_MAIS_ALTO = 0, $ALUNO_MAIS_BAIXO = 0;
    float $VETOR_ALTURA_ALUNO[10];

    for( int $CONTADOR = 0; $CONTADOR < 10; $CONTADOR++ )
    {
        system("clear");

        printf("Digite o número do aluno: ");
        scanf("%d",&$VETOR_NUM_ALUNO[$CONTADOR]);

        printf("Digite a altura do aluno %d: ", $VETOR_NUM_ALUNO[$CONTADOR]);
        scanf("%f",&$VETOR_ALTURA_ALUNO[$CONTADOR]);

        $CONTADOR == 0 ? $ALUNO_MAIS_ALTO = $CONTADOR : NULL;
        $CONTADOR == 0 ? $ALUNO_MAIS_BAIXO = $CONTADOR : NULL;

        $VETOR_ALTURA_ALUNO[$CONTADOR] > $VETOR_ALTURA_ALUNO[$ALUNO_MAIS_ALTO] ? $ALUNO_MAIS_ALTO = $CONTADOR : NULL;
        $VETOR_ALTURA_ALUNO[$CONTADOR] < $VETOR_ALTURA_ALUNO[$ALUNO_MAIS_BAIXO] ? $ALUNO_MAIS_BAIXO = $CONTADOR : NULL;
    }

    system("clear");
    
    printf("===============================================================");
    printf("\nNúmero do aluno mais alto: %d\nAltura do aluno mais alto: %.2f\n", $VETOR_NUM_ALUNO[$ALUNO_MAIS_ALTO], $VETOR_ALTURA_ALUNO[$ALUNO_MAIS_ALTO]);
    printf("===============================================================");
    printf("\nNúmero do aluno mais baixo: %d\nAltura do aluno mais baixo: %.2f\n", $VETOR_NUM_ALUNO[$ALUNO_MAIS_BAIXO], $VETOR_ALTURA_ALUNO[$ALUNO_MAIS_BAIXO]);
    printf("===============================================================\n");
}