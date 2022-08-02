//Lectura de datos
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	int numero = 0;
	cout<<"Ingrese un número: ";
	cin>>numero;
	
	cout<<"\nEl número ingresado es: "<<numero<<"\n";
	
	
	system("pause");
	return 0;
	
	
}
