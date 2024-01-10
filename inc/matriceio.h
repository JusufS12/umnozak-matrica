#include <stdio.h>

#ifndef MATRICEIO_H
#define MATRICEIO_H

#define error(msg, ...) printf("[!] " msg "\n", ##__VA_ARGS__)

//dimenzije matrice
extern size_t stN, stM;

int setMatrixSize(size_t n, size_t m);
int popuniMatricu(int mat[stN][stM]);
void prikazMatrice(int mat[stN][stM]);

#endif
