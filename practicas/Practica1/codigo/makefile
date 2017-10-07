# Fichero: makefile
HOME = .


BIN=$(HOME)/bin
OBJ=$(HOME)/obj
INCLUDE=$(HOME)/include
LIB=$(HOME)/lib
SRC=$(HOME)/src


all : $(BIN)/ejercicio_7_1 $(BIN)/ejercicio_7_2  \
	  $(BIN)/ejercicio_1 $(BIN)/ejercicio_desc $(BIN)/ejercicio_4_peor \
	  $(BIN)/ejercicio_4_mejor $(BIN)/ejercicio_5

#ejecutables
$(BIN)/ejercicio_5 : $(SRC)/ejercicio_5.cpp

	g++ -O3  --std=c++11 -o $(BIN)/ejercicio_5 $(SRC)/ejercicio_5.cpp

$(BIN)/ejercicio_4_mejor : $(SRC)/ejercicio_4_mejor.cpp

	g++ -O3  --std=c++11 -o $(BIN)/ejercicio_4_mejor $(SRC)/ejercicio_4_mejor.cpp

$(BIN)/ejercicio_4_peor : $(SRC)/ejercicio_4_peor.cpp

	g++ -O3  --std=c++11 -o $(BIN)/ejercicio_4_peor $(SRC)/ejercicio_4_peor.cpp


$(BIN)/ejercicio_desc : $(SRC)/ejercicio_desc.cpp

	g++ -O3  --std=c++11 -o $(BIN)/ejercicio_desc $(SRC)/ejercicio_desc.cpp

$(BIN)/ejercicio_1 : $(SRC)/ejercicio_1.cpp

	g++ -O3 -o $(BIN)/ejercicio_1 $(SRC)/ejercicio_1.cpp

$(BIN)/ejercicio_7_1 : $(SRC)/ejercicio_7_1.cpp

	g++ -O3 -o $(BIN)/ejercicio_7_1 $(SRC)/ejercicio_7_1.cpp

$(BIN)/ejercicio_7_2 : $(SRC)/ejercicio_7_2.cpp

	g++ -O3 -o $(BIN)/ejercicio_7_2 $(SRC)/ejercicio_7_2.cpp

#opciones de limpieza
cleanlib :
	@echo Borrando librerias
	@-rm $(LIB)/*.a

clean :
	@echo Borrando ficheros objetos
	@-rm $(OBJ)/*.o
mr-proper :

	@echo Borrando ejecutables
	@-rm $(BIN)/*
