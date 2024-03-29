#include <iostream>
#include <ctime>    // Recursos para medir tiempos
#include <cstdlib>  // Para generación de números pseudoaleatorios

using namespace std;

void forma_usar(void){
	cerr << "Numero de parametro incorrecto" << endl;
	cerr << "Forma correcta de ejecutar: " << endl;
	cerr << "ejercicio7_1 tamaño valor_maximo" << endl;
	exit(1);
}

//Codigo copiado del PDF de practicas
void ordenar(int *v, int n) {
	for (int i=0; i<n-1; i++)
		for (int j=0; j<n-i-1; j++)
			if (v[j]>v[j+1]) {
				int aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
		}
}

int main(int argc, char * argv[])
{
  
	if (argc!=3)
		forma_usar();
	int tam=atoi(argv[1]);     // Tamaño del vector
	int max=atoi(argv[2]);    // Valor máximo
	
	if (tam<=0 || max<=0)
    	forma_usar();
  
	// Generación del vector aleatorio
	int *v=new int[tam];       // Reserva de memoria
	srand(time(0));            // Inicialización del generador de números pseudoaleatorios
	for (int i=0; i<tam; i++)  // Recorrer vector
		v[i] = rand() % max;    // Generar aleatorio [0,max[

	clock_t tini;    // Anotamos el tiempo de inicio
	tini=clock();

	ordenar(v,tam); // de esta forma forzamos el peor caso
  
	clock_t tfin;    // Anotamos el tiempo de finalización
	tfin=clock();

	// Mostramos resultados
	cout << tam << "\t" << (tfin-tini)/(double)CLOCKS_PER_SEC << endl;
  
  delete [] v;     // Liberamos memoria dinámica
}
