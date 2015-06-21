#include <iostream>	
#include "funciones.h"
using namespace std;
int main(){
	int nodos, conexiones,matrizAdy[10][10], costo;
	char v1,v2
;	cin >> nodos >> conexiones;
	inicializarMatriz(matrizAdy, nodos);
	for (int j = 0; j < conexiones; j++) {
		cin >> v1 >> v2 >> costo;
		matrizAdy[(int) (toupper(v1)-65)][(int) (toupper(v2)-65)] = costo;
		//matrizAdy[(int) (toupper(v2)-65)][(int) (toupper(v1)-65)] = costo;
	}
	floyd(matrizAdy, nodos);
	imprimirCaminos(matrizAdy, nodos);
	return 0;
}