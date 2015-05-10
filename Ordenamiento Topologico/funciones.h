void llenarPrerrequisito(bool matriz[][10], int prerrequisito[], int max, char & vertice){
	int cont = 0;
	vertice = '*';
	for (int i = 0; i < max; ++i)
	{
		cont = 0;
		for (int j = 0; j < max; ++j)
			if(matriz[j][i])
				cont++;
		prerrequisito[i] = cont;
		if(cont==0) 
			vertice = (char) i + 65;
	}
	if(vertice == '*'){
		std::cout << "No hay ningún nodo sin prerrequisitos" << std::endl;
		exit(EXIT_FAILURE);
	}
}

void agregarNodo(char vector[], char nodo, int max){
	for (int i = 0; i < max; ++i)
		if(vector[i]=='*'){
			vector[i] = nodo;
			break;
		}
}

void inicializarMatriz(bool matriz[][10], int max){
	for (int i = 0; i < max; ++i)
		for (int j = 0; j < max; ++j)
			matriz[i][j] = 0;
}
