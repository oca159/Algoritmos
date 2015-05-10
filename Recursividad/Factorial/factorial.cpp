#include <iostream>
using namespace std;

int factorial(int);
int main()
{
	int n;
	cout << "Ingresa un número: " << endl;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}

int factorial(int n){
	if (n < 0)
		return 0;
	else if(n > 1)
		return n*factorial(n-1);
	return 1;
}