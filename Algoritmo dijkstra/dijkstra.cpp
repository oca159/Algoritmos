#include <iostream>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int main() {
	char visitados[] = {'A','B','C','D','E','F','G','H','I','J'};
	int nodos,conexiones, costo;
	char v1, v2, nodoInicial, actual;
	Nodo lista[10], nodo;
	int matriz[10][10];
	cin >> nodos >> conexiones;
	inicializarMatriz(matriz,nodos);
	for (int j = 0; j < conexiones; ++j)
	{
		cin >> v1 >> v2 >> costo;
		matriz[(int) (toupper(v1)-65)][(int) (toupper(v2)-65)] = costo;
		matriz[(int) (toupper(v2)-65)][(int) (toupper(v1)-65)] = costo;
	}
	cin >> nodoInicial;
	cout << "Nodo inicial: " << nodoInicial << endl;
	nodoInicial = toupper(nodoInicial);
	for (int i = 0; i < nodos; ++i)
	{
		nodo.precedente = '-';
		nodo.distancia = INFINITO;
		lista[i] = nodo;
	}
	lista[(int) nodoInicial-65].distancia = 0; /* Actualizamos distancia del fuente */
	actual = nodoInicial;
	for (int i = 0; i < nodos; ++i)
	{
		actualizarLista(lista, actual, matriz, nodos);
		visitados[(int)(actual-65)] = '*';
		actual = encuentraNodo(visitados, nodos);
	}
	imprimeListaNodos(lista,nodos);
	cin.get();
	return 0;
}