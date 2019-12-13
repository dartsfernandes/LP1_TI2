#ifndef EQUIPAMENTOS_H_
#define EQUIPAMENTOS_H_

#include "../header.h"

typedef struct{
    int codigo;
    char tipo[15];
    char marca[15];
    char modelo[20];
    Data data_aquisicao;
} Equipamento;

#endif