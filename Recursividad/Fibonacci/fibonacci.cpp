#include <iostream>
using namespace std;
int fibonacci(int);
int main()
{
	int n;
	cout << "Dame un número:" << endl;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}

int fibonacci(int n){
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n>1)
		return fibonacci(n-1)+fibonacci(n-2);
}