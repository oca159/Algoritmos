#include <iostream>
#include <string.h>
#include <list>
#include <ctype.h>
#include "funciones.h"

void Permutaciones(string cad, int l=0);

int main() {
	int nodos,conexiones, costo, mascorto=2147483647;
	char v1, v2;
	int matriz[10][10];
	cin >> nodos >> conexiones;
	string palabra = "", camino, caminoCorto = "";
	inicializarMatriz(matriz,nodos);
	for (int j = 0; j < conexiones; ++j)
	{
		cin >> v1 >> v2 >> costo;
		matriz[(int) (toupper(v1)-65)][(int) (toupper(v2)-65)] = costo;
		matriz[(int) (toupper(v2)-65)][(int) (toupper(v1)-65)] = costo;
	}
	for (int i = 0; i < nodos; ++i)
		palabra += (char) (i+65);
	Permutaciones(palabra);
	int tam = caminos.size();
	for (int i = 0; i < tam; ++i)
	{
		camino = caminos.front();
		caminos.pop_front();
		cout << "Camino " << i+1 << "\t"; 
		imprimeCamino(camino, matriz, mascorto, caminoCorto);
	}
	cout << "El camino más corto es: " << caminoCorto <<  mascorto << endl;
	cin.get();
	return 0;
}
