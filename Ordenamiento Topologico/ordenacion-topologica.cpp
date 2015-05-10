#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
using namespace std;
int main()
{
	int n, m;
	char b, c, vertice;
	int prerrequisito[10];
	char lista[10];
	bool matriz[10][10];
	//Leemos el número de nodos y arcos
	cin >> n >> m;
	inicializarMatriz(matriz, n); //llenamos con ceros
	for (int i = 0; i < m; ++i){
		cin >> b >> c;
		matriz[(int) (toupper(b) - 65)][(int) (toupper(c) - 65)] = 1;
	}
	llenarPrerrequisito(matriz, prerrequisito, n, vertice);
	for (int i = 0; i < n; ++i)
		lista[i] = '*';
	lista[0] = vertice; // Metemos el vertice sin prerrequisitos a la lista 
	for (int i = 0; i < n; ++i){
		if(lista[i]!='*'){
			cout << lista[i] << " ";
			for (int j = 0; j < n; ++j)
				prerrequisito[j] -= matriz[(int) (toupper(lista[i]) - 65)][j];
			for (int p = i+1; p < n; ++p)
				if(prerrequisito[p]==0){
					agregarNodo(lista,(char) p+65,n);
					prerrequisito[p] = -1;
				}
		}
		else{
			cout << endl <<  "No se puede resolver";
			break;
		}	
	}
	cout << endl;
	return 0;
}