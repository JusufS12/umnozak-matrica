CC=gcc
SRC=src
OUT=build/bin/umnozak-matrica
INC=inc
OBJ=build/obj


$(OUT): $(OBJ)/main.o $(OBJ)/matriceio.o
	$(CC) -o $(OUT) $(OBJ)/main.o $(OBJ)/matriceio.o


$(OBJ)/matriceio.o: $(SRC)/matriceio.c $(INC)/matriceio.h
	$(CC) -Wall -Wextra -std=c17 -c $(SRC)/matriceio.c -o $(OBJ)/matriceio.o


$(OBJ)/main.o: $(SRC)/main.c
	$(CC) -Wall -Wextra -std=c17 -c $(SRC)/main.c -o $(OBJ)/main.o



clean:
	rm $(OBJ)/*.o $(OUT)

run:
	$(OUT)