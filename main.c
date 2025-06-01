#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome [50];
    int N1;
    int N2;
    int N3;
    float media;
} Aluno;

void CalcularMedia(Aluno *p) {
    p->media = (p->N1 + p->N2 + p->N3)/ 3.0f;
}

void imprimir(Aluno*p) {
    printf("----Dados do Aluno ----\n");
    printf("Nome do aluno: %s\n", p->nome);
    printf("Media do aluno: %.2f", p->media);
}

int main(){
    Aluno aluno= {
        .nome = "Maria Eduarda",
        .N1 = 10,
        .N2 = 7,
        .N3 = 5,
        .media = 0
    };
    Aluno *p = &aluno;
    CalcularMedia(p);
    imprimir(p);
    return 0;
}
