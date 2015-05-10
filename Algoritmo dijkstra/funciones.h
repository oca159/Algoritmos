using namespace std;

struct Nodo
{
	char precedente;
	int distancia;
};

const int INFINITO  = 10000;
list<char> adyacentes;

void inicializarMatriz(int matriz[][10], int max){
	for (int i = 0; i < max; ++i)
		for (int j = 0; j < max; ++j){
			if(i==j)
				matriz[i][j] = 0;
			else
				matriz[i][j] = INFINITO;
		}
}

void imprimeMatriz(int matriz[][10], int max){
	for (int i = 0; i < max; ++i){
		for (int j = 0; j < max; ++j)
			cout << matriz[i][j] << " ";
		cout << endl;
	}
}

void imprimeListaNodos(Nodo lista[], int max){
	for (int i = 0; i < max; ++i)
		cout << lista[i].precedente << " "  << lista[i].distancia << endl;
}

void actualizarLista(Nodo lista[], char actual, int matriz[][10], int max){
	for (int j = 0; j < max; ++j)
		if(matriz[(int) actual-65][j]!=INFINITO && matriz[(int) actual-65][j]!= 0)
			adyacentes.push_back((char) j+65);		
	int tam = adyacentes.size();
	char c;
	for (int i = 0, x, y; i < tam; ++i)
	{
		c = adyacentes.front(); 
		adyacentes.pop_front();
		x = (int) (toupper(c)-65); // el elemento de la lista
		y = (int) (toupper(actual)-65); // convertimos a número el elemento actual
		if(lista[x].distancia>(lista[y].distancia+matriz[x][y])){
			lista[x].precedente = actual;
			lista[x].distancia = lista[y].distancia+matriz[x][y];
		}
	}
}