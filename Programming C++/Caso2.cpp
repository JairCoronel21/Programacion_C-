// Tipos de datos

#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//Numero Entero
	int n1 = 18;
	
	//Numero decimal
	float n2 = 5.24;
	
	double n3 = 253.654125;
	
	//Caracter
	char letra = 'c';
	
	//Logicos o booleanos
	bool valor = true;
	
	//Constante
	const float PI = 3.1416;
	
	//Impresion
	cout<<"Número 1.........: "<<n1<<"\n";
    cout<<"Número 2.........: "<<n2<<"\n";
	cout<<"Carácter.........: "<<letra<<"\n";
	cout<<"Valor.........: "<<valor<<"\n";
	cout<<"Constante PI.........: "<<PI<<"\n";
	
	system("pause");
	return 0;
}
