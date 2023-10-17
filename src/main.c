#include <stdio.h>
#include <stdlib.h>


void grafickiPrikaz(size_t index) {
	char *point = "V\n";
	for (size_t i = 3; i < 10; i += 3) {
		if (index + 1 <= i && index + 1 > i - 3) {
			switch (i - index)
			{
			case 2:
				printf("%s", point);
				break;
			case 1:
				printf("   %s", point);
				break;
			case 0:
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

int popuniMatricu() {
	int mat[3][3];
	grafickiPrikaz(7);
	return mat;
}

int main(int argc, char *argv[]) {
	puts("Unesi prvu matricu:\r\n");
	int matrica1 = popuniMatricu();
	puts("Unesi drugu matricu:\r\n");
	int matrica2 = popuniMatricu();
	return 0;
}
