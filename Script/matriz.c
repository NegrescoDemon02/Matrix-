#include <stdio.h>
#include <stdlid.h>

int main (){

// Matriz

    int notas[3][4],somaAluno,somaTurma;

    for(int i=0;i<3;i++){
        somaAluno = 0;
        for(int j=0;j<4;j++){

            printf("Informe a nota %d do aluno %d: ", j+1,i+1);
            scanf("%d", &notas[i][j]);

             somaAluno += notas[i][j];
             somaTurma += somaAluno;
        }
    }

    somaTurma = somaTurma/50;
    printf("A media da turma e: %d", somaTurma);

    return 0; 
}