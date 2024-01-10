#include "../inc/matriceio.h"
#include <stdio.h>
#include <stdlib.h>

size_t stN, stM;

int unosBroja() {
  // funkcija za unos broja
  char broj[10];
  int rezultat = 0;
  fgets(broj, sizeof broj, stdin);
  rezultat = atoi(broj);
  return rezultat;
}

void pointPrint(size_t stupac) {
  size_t i;

  for (i = 0; i < (stupac * 3); i++) {
    printf(" ");
  }

  puts("V\n");
}

int grafickiPrikaz(size_t red, size_t stupac) {

  size_t i, j;

  if (stN < red || stM < stupac) {
    error("invalid row and/or column were given when trying to display "
          "grafical helper: given number of rows and columns is %ldx%ld, but "
          "matrix size is %ldx%ld",
          red, stupac, stN, stM);
    return EXIT_FAILURE;
  }

  putchar('\n');
  for (i = 0; i < stN; i++) {
    if (red == i) {
      pointPrint(stupac);
    }
    for (j = 0; j < stM; j++) {
      printf("[] ");
    }
    printf("\n");
  }
  putchar('\n');
  printf("Unesi poje %ldx%ld: \n", red, stupac);
  return EXIT_SUCCESS;
}

int popuniMatricu(int mat[stN][stM]) {
  size_t i, j;
  for (i = 0; i < stN; i++) {
    for (j = 0; j < stM; j++) {
      if (grafickiPrikaz(i, j) != EXIT_SUCCESS) {
        return EXIT_FAILURE;
      }
      mat[i][j] = unosBroja();
    }
  }
  return EXIT_SUCCESS;
}

void prikazMatrice(int mat[stN][stM]) {
  size_t i, j;
  putchar('\n');
  for (i = 0; i < stN; i++) {
    for (j = 0; j < stM; j++) {
      printf("[%d] ", mat[i][j]);
    }
    printf("\n");
  }
  putchar('\n');
}

int setMatrixSize(size_t n, size_t m) {

  stN = n;
  stM = m;

  if (stN <= 0 || stM <= 0) {
    error("matrix size must be bigger than 0");
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
