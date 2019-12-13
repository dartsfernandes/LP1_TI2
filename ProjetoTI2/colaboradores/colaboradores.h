#ifndef COLABORADORES_H_
#define COLABORADORES_H_

#include "../header.h"

#define MAX_COLABORADOR 100

typedef struct{
    int codigo;
    char nome[50];
    Bool ativo;
    int quantidadeAuditorias;
} Colaborador;

Colaborador novoColaborador(int codigo);
int insereColaborador(Colaborador *colaboradores, int n);

#endif