# Exemplo de Makefile 
# Aula de LP1 2018.2
# 07-09/08/2018
# Clonagem do código para testes : git clone https://github.com/imdcode/makeaula.git exemplo2
#
# Silvio Costa Sampaio
#

CC = g++

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG1 = $(BIN)/triangulo
PROG2 = $(BIN)/retangulo
PROG3 = $(BIN)/circulo

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS1 = $(OBJ)/triangulo.o $(OBJ)/trianguloMain.o
OBJS2 = $(OBJ)/retangulo.o $(OBJ)/retanguloMain.o 
OBJS3 = $(OBJ)/circulo.o $(OBJ)/circuloMain.o

all: mkdirs $(PROG1) $(PROG2) $(PROG3)

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG1): $(OBJS1)
	$(CC) $(CPPFLAGS) -o $(PROG1) $(OBJS1)

$(PROG2): $(OBJS2)
	$(CC) $(CPPFLAGS) -o $(PROG2) $(OBJS2)

$(PROG3): $(OBJS3)
	$(CC) $(CPPFLAGS) -o $(PROG3) $(OBJS3)

$(OBJ)/circulo.o: $(SRC)/circulo.cpp $(INC)/circulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circulo.cpp -o $(OBJ)/circulo.o

$(OBJ)/retangulo.o: $(SRC)/retangulo.cpp $(INC)/retangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retangulo.cpp -o $(OBJ)/retangulo.o

$(OBJ)/triangulo.o: $(SRC)/triangulo.cpp $(INC)/triangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/triangulo.cpp -o $(OBJ)/triangulo.o

$(OBJ)/circuloMain.o: $(SRC)/circuloMain.cpp $(INC)/circulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/circuloMain.cpp -o $(OBJ)/circuloMain.o

$(OBJ)/trianguloMain.o: $(SRC)/trianguloMain.cpp $(INC)/triangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/trianguloMain.cpp -o $(OBJ)/trianguloMain.o

$(OBJ)/retanguloMain.o: $(SRC)/retanguloMain.cpp $(INC)/retangulo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/retanguloMain.cpp -o $(OBJ)/retanguloMain.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*