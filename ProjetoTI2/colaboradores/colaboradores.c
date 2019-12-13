#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "colaboradores.h"

Colaborador novoColaborador(int codigo)
{
    Colaborador colaborador;

    colaborador.codigo = codigo + 1;

    printf("NOME: \n");
    scanf("%s", colaborador.nome);

    colaborador.quantidadeAuditorias = 0;
    colaborador.ativo = True;

    return colaborador;
}

int insereColaborador(Colaborador *colaboradores, int n)
{
    if (n >= MAX_COLABORADOR){
        return -1;
    }

    colaboradores[n] = novoColaborador(n);
    n++;

    return n;
}

int pesquisaColaboradorID(Colaborador *colaboradores, int n, int codigo)
{
    int i = 0;

    while (codigo != colaboradores[i].codigo && i < n){
        i++;
    }

    if (i >= n)
    {
        return -1;
    }

    return i;    
}

int removerColaborador(Colaborador *colaboradores, int n, int codigo)
{
    int indice;

    indice = pesquisaColaboradorID(colaboradores, n, codigo);

    if (indice >= 0)
    {
        colaboradores[indice].ativo = False; // Dá a informação para ser tratada na main

        return True; // DÚVIDA, False ou True???
    }
    
    return False; // DÚVIDA, False ou True???s
}

// FAZER EDITAR_COLABORADOR
