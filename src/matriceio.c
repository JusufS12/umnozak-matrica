#include "../inc/matriceio.h"
#include <stdio.h>
#include <stdlib.h>


int unosBroja() {
	// funkcija za unos broja
	char broj[10];
	int rezultat = 0;
	fgets(broj, sizeof broj, stdin);
	rezultat = atoi(broj);
	return rezultat;
}

void grafickiPrikaz(size_t red, size_t stupac) {
	size_t i;
	char point = 'V';
	for (i = 0; i < 3; i++) {
		if (red == i) {
			switch (stupac) {

			case 0:
				printf("%c\n", point);
				break;
			case 1:
				printf("   %c\n", point);
				break;
			case 2:
				printf("      %c\n", point);
				break;
			default:
			puts("Greska!");
				break;
			}
			
		}
		puts("[] [] []");
	}
	putchar('\n');
	printf("Unesi poje %ldx%ld: \n", red, stupac);
}

void popuniMatricu(int mat[3][3]) {
	size_t i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			grafickiPrikaz(i, j);
			mat[i][j] = unosBroja();
		}
	}
}

void prikazMatrice(int mat[3][3]) {
	printf("[%d] [%d] [%d]\n[%d] [%d] [%d]\n[%d] [%d] [%d]\n", mat[0][0], mat[0][1], mat[0][2], mat[1][0], mat[1][1], mat[1][2], mat[2][0], mat[2][1], mat[2][2]);
	puts("\n");
}