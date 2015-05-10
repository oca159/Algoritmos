#include <iostream>
#include <list>
using namespace std;
 
/* Prototipo de función */
void Permutaciones(string cad, int l=0); 

/* Variable global*/
list<string> palabras;

int main() {
   string palabra = "ABCD";
   int tam = 0;
   Permutaciones(palabra);
   tam =  palabras.size();
   for (int i = 0; i < tam; ++i)
   {
      cout << palabras.front() << endl;
      palabras.pop_front();
   }
   cin.get();
   return 0;
}

void Permutaciones(string cad, int l) {
   char c;    /* variable auxiliar para intercambio */
   int i, j;  /* variables para bucles */
   int n = cad.size();

   for(i = 0; i < n-l; i++) {
      if(n-l > 2) 
         Permutaciones(cad, l+1);
      else 
         palabras.push_back(cad);
      /* Intercambio de posiciones */
      c = cad[l];
      cad[l] = cad[l+i+1];
      cad[l+i+1] = c;
      if(l+i == n-1) {
         for(j = l; j < n; j++)
            cad[j] = cad[j+1];
         cad[n] = 0;
      }
   }
}