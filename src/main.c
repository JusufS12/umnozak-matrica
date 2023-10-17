#include <stdio.h>
#include <stdlib.h>

#define BROJ_MAX 10

int unosBroja() {
    // funkcija za unos broja
    size_t i;
    char broj[BROJ_MAX];
    int rezultat = 0;
    fgets(broj, sizeof broj, stdin);
    for (i = 0; broj[i] != '\0'; ++i) {
        if ('0' <= broj[i] && broj[i] <= '9') {
            rezultat *= 10;
            rezultat += broj[i] - '0';
        }
    }
	if (broj[0] == '-') {
		rezultat = -rezultat;
	}
    return rezultat;
}

void grafickiPrikaz(size_t red, size_t stupac) {
	char *point = "V\n";
	puts("\n");
	for (size_t i = 0; i < 3; i++) {
		if (red == i) {
			switch (stupac)
			{
			case 0:
				printf("%s", point);
				break;
			case 1:
				printf("   %s", point);
				break;
			case 2:
				printf("      %s", point);
				break;
			default:
			puts("Greska!");
				break;
			}
			
		}
		puts("[] [] []");
	}
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
	puts("\n");
	printf("[%d] [%d] [%d]\n[%d] [%d] [%d]\n[%d] [%d] [%d]\n", mat[0][0], mat[0][1], mat[0][2], mat[1][0], mat[1][1], mat[1][2], mat[2][0], mat[2][1], mat[2][2]);
	puts("\n");
}

int main(int argc, char *argv[]) {
	int matrica1[3][3];
	int matrica2[3][3];

	puts("Unesi prvu matricu:\r\n");
	popuniMatricu(matrica1);

	puts("Unesi drugu matricu:\r\n");
	popuniMatricu(matrica2);

	prikazMatrice(matrica1);
	prikazMatrice(matrica2);

	return 0;
}
