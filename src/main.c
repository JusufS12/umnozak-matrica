#include <stdio.h>
#include <stdlib.h>
#include "../inc/matriceio.h"


void umnozakMatrica(int mat1[stN][stM], int mat2[stN][stM], int umn[stN][stM]) {
	unsigned int i, j, n, m;
	int tmp = 0;
	for (i = 0; i < stN; i++) {
		for (j = 0; j < stM; j++) {
			for (n = 0; n < stN; n++) {
				for (m = 0; m < stM; m++) {
					tmp += mat1[i][m] * mat2[m][j];
				}
				umn[i][j] = tmp;
				tmp = 0;
			}
		}
	}
}


int main(const int argc, const char* argv[]) {

	if(argc != 2) {
		puts("usage: umat <number of rows and columns>");
		return EXIT_FAILURE;
	}

	if (setMatrixSize(atoi(argv[1]), atoi(argv[1])) != EXIT_SUCCESS) {
		return EXIT_FAILURE;
	}

	int matrica1[stN][stM];
	int matrica2[stN][stM];
	int umnozak[stN][stM];

	puts("Unesi prvu matricu:\n");
	popuniMatricu(matrica1);

	puts("Unesi drugu matricu:\n");
	popuniMatricu(matrica2);

	puts("Prva matrica:\n");
	prikazMatrice(matrica1);
	puts("Druga matrica:\n");
	prikazMatrice(matrica2);

	puts("Umnozak matrica:\n");
	umnozakMatrica(matrica1, matrica2, umnozak);

	prikazMatrice(umnozak);

	return EXIT_SUCCESS;
}
