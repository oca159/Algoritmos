#include <iostream>
#include <string.h>
#include <list>
#include <ctype.h>
#include "funciones.h"

int main() {
	list<char> visitados;
	int nodos,conexiones, costo;
	char v1, v2, nodoInicial, actual;
	Nodo lista[10];
	Nodo nodo;
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
		visitados.push_back((char) i+65);
	for (int i = 0; i < nodos; ++i)
	{
		actualizarLista(lista, actual, matriz, nodos);
		visitados.remove(actual);
		actual = visitados.front();
	}
	imprimeListaNodos(lista,nodos);
	
	cin.get();
	return 0;
}