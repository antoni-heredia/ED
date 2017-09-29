#include <iostream>
#include <ctime>    // Recursos para medir tiempos
#include <cstdlib>  // Para generación de números pseudoaleatorios

using namespace std;

void forma_usar(void){
	cerr << "Numero de parametro incorrecto" << endl;
	cerr << "Forma correcta de ejecutar: " << endl;
	cerr << "ejercicio7_2 tamaño " << endl;
	exit(1);
}

void multiplicar(int **m1, int **m2, int **m3, int tam) {
	
	for(int c = 0; c < tam; c++)
		for(int f = 0; f < tam; f++){
			int suma = 0;
			
			for(int x = 0; x < tam; x++)
				suma += m1[f][x]*m2[c][x];

			m1[f][c] = suma;
		}
			
	
}

int main(int argc, char * argv[])
{
  
	if (argc!=3)
		forma_usar();
	int tam=atoi(argv[1]);     // Tamaño de la matriz
	int max=atoi(argv[2]);

	if (tam<=0)
    	forma_usar();


	int **matriz1;
	int **matriz2;
	int **matriz3;

  	matriz1 = new int * [tam];
	matriz2 = new int * [tam];
	matriz3 = new int * [tam];

	for(int f = 0; f < tam; f++){
		matriz1[f] = new int  [tam];
		matriz2[f] = new int  [tam];
		matriz3[f] = new int  [tam];
	
	}

	srand(time(0));            // Inicialización del generador de números pseudoaleatorios
	for(int f = 0; f < tam; f++)
		for(int c = 0 ; c < tam; c++){
			matriz1[f][c] = rand() % max; 
			matriz2[f][c] = rand() % max; 
		}
	

	clock_t tini;    // Anotamos el tiempo de inicio
	tini=clock();

	multiplicar(matriz1, matriz2, matriz3, tam);
	
	clock_t tfin;    // Anotamos el tiempo de finalización
	tfin=clock();

	// Mostramos resultados
	cout << tam << "\t" << (tfin-tini)/(double)CLOCKS_PER_SEC << endl;
  
	for(int f = 0; f < tam; f++){
		delete matriz1[f];
		delete matriz2[f];
		delete matriz3[f];
	}     // Liberamos memoria dinámica
	
	delete matriz1;
	delete matriz2;
	delete matriz3;
	
}
