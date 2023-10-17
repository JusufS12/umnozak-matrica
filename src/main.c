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
        if ('0' <= broj[i] && broj[i] <= '9' || '-') {
            rezultat *= 10;
            rezultat += broj[i] - '0';
        }
    }
    return rezultat;
}

void grafickiPrikaz(size_t red, size_t stupac) {
	char *point = "V\n";
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
	puts("\n");
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

int main(int argc, char *argv[]) {
	int matrica1[3][3];
	int matrica2[3][3];

	puts("Unesi prvu matricu:\r\n");
	popuniMatricu(matrica1);

	puts("Unesi drugu matricu:\r\n");
	popuniMatricu(matrica2);

	return 0;
}
