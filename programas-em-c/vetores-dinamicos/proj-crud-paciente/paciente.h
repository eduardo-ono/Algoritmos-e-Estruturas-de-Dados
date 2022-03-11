#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct paciente {
    char nome[100];
    float peso;
    float altura;
    float imc;
} Paciente;

typedef Paciente Data;

#endif
