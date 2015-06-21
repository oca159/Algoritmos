#include <iostream>
using namespace std;

const int INFINITO  = 10000;
void inicializarMatriz(int matrizAdy[][10], int max){
	for (int i = 0; i < max; ++i)
		for (int j = 0; j < max; ++j){
			if(i==j)
				matrizAdy[i][j] = 0;
			else
				matrizAdy[i][j] = INFINITO;
		}
}
void floyd(int matrizAdy[][10], int nodos){
	for(int k=0; k<nodos; k++)
		for (int i =0; i<nodos; i++)
			for (int j=0; j<nodos; j++)
				if (matrizAdy[i][j]>matrizAdy[i][k]+matrizAdy[k][j])
					matrizAdy[i][j]=matrizAdy[i][k]+matrizAdy[k][j];

}
void imprimirCaminos(int matrizAdy[][10], int nodos){
	cout <<"-----Caminos más cortos-----"<<endl;
	for (int i=0; i< nodos; i++){
		cout<<"NODO INICIAL: "<<(char(i+65))<<endl;
		for (int j=0; j<nodos; j++ ){
			cout <<"Al nodo:  "<<(char(j+65))<<" costo: "<<matrizAdy[i][j]<<endl;
		}
	}

}
