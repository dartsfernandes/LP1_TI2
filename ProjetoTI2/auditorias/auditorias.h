#ifndef AUDITORIAS_H_
#define AUDITORIAS_H_

#include "../colaboradores/colaboradores.h"

typedef struct{
    int codigo;
    Colaborador colaborador;
    Data data;
    int duracao;
} Auditoria;


#endif