#include <stdio.h>
#include <stdlib.h>
#include "../inc/matriceio.h"


int main(void) {
	int matrica1[3][3];
	int matrica2[3][3];

	puts("Unesi prvu matricu:\r\n");
	popuniMatricu(matrica1);

	puts("Unesi drugu matricu:\r\n");
	popuniMatricu(matrica2);

	prikazMatrice(matrica1);
	prikazMatrice(matrica2);

	return EXIT_SUCCESS;
}
