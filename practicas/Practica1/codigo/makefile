# Fichero: makefile
HOME = .


BIN=$(HOME)/bin
OBJ=$(HOME)/obj
INCLUDE=$(HOME)/include
LIB=$(HOME)/lib
SRC=$(HOME)/src


all : $(BIN)/ejercicio_7_1 $(BIN)/ejercicio_7_2 $(BIN)/ejercicio_7_3 $(BIN)/ejercicio_1 $(BIN)/ejercicio_desc

#ejecutables
$(BIN)/ejercicio_desc : $(SRC)/ejercicio_desc.cpp

	g++ -O3  --std=c++11 -o $(BIN)/ejercicio_desc $(SRC)/ejercicio_desc.cpp

$(BIN)/ejercicio_1 : $(SRC)/ejercicio_1.cpp

	g++ -O3 -o $(BIN)/ejercicio_1 $(SRC)/ejercicio_1.cpp

$(BIN)/ejercicio_7_1 : $(SRC)/ejercicio_7_1.cpp

	g++ -O3 -o $(BIN)/ejercicio_7_1 $(SRC)/ejercicio_7_1.cpp

$(BIN)/ejercicio_7_2 : $(SRC)/ejercicio_7_2.cpp

	g++ -O3 -o $(BIN)/ejercicio_7_2 $(SRC)/ejercicio_7_2.cpp

$(BIN)/ejercicio_7_3 : $(SRC)/ejercicio_7_3.cpp

	g++ -O3 -o $(BIN)/ejercicio_7_3 $(SRC)/ejercicio_7_3.cpp
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