#include <stdio.h>
#include <stdlib.h>
#include "../inc/matriceio.h"


void umnozakMatrica(int mat1[3][3], int mat2[3][3], int umn[3][3]) {
	unsigned int i, j, n, m;
	int tmp = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (n = 0; n < 3; n++) {
				for (m = 0; m < 3; m++) {
					tmp += mat1[i][m] * mat2[m][j];
				}
				umn[i][j] = tmp;
				tmp = 0;
			}
		}
	}
}


int main(void) {
	int matrica1[3][3];
	int matrica2[3][3];
	int umnozak[3][3] = {};

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
