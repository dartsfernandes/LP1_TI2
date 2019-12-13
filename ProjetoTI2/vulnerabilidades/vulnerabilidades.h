#ifndef VULNERABILIDADES_H_
#define VULNERABILIDADES_H_

#include "../header.h"

typedef struct{
    int codigo;
    char descricao[30];
    Nivel nivel_impacto;
} Vulnerabilidade;

#endif