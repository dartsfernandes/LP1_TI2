#ifndef HEADER_H_
#define HEADER_H_

typedef enum{
    Baixo,
    Moderado,
    Elevado
} Nivel;

typedef enum{
    False,
    True
} Bool;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

#endif