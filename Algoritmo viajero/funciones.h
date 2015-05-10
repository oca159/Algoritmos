using namespace std;
list<string> caminos;

void inicializarMatriz(int matriz[][10], int max){
	for (int i = 0; i < max; ++i)
		for (int j = 0; j < max; ++j)
			matriz[i][j] = 0;
}

void imprimeMatriz(int matriz[][10], int max){
	for (int i = 0; i < max; ++i){
		for (int j = 0; j < max; ++j)
			cout << matriz[i][j] << " ";
		cout << endl;
	}
}

void imprimeCamino(string camino, int matriz[][10], int & mascorto, string & caminoCorto){
	char v1, v2;
	int costo = 0;
	string temp = "";
	for (int i = 0; i < camino.size()-1; ++i)
	{
		v1 = camino[i];
		v2 = camino[i+1];
		temp += v1;
		temp += ", ";
		costo += matriz[(int) (toupper(v1)-65)][(int) (toupper(v2)-65)];
	}
	temp += camino[0]; 
	temp += " "; 
	if(costo< mascorto){
		mascorto = costo;
		caminoCorto = temp;
	}
	cout << temp << costo << endl;
}

void Permutaciones(string cad, int l) {
	char c; /* variable auxiliar para intercambio */
	int n = cad.size(); /* tamaño de la cadena */
	for(int i = 0; i < n-l; i++) {
		if(n-l > 2) 
			Permutaciones(cad, l+1);
		else
			caminos.push_back(cad+cad[0]);
		/* Intercambio de posiciones */
		c = cad[l];
		cad[l] = cad[l+i+1];
		cad[l+i+1] = c;
		if(l+i == n-1) {
			for(int j = l; j < n; j++) cad[j] = cad[j+1];
			cad[n] = 0;
		}
	}
}