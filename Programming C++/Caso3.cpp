#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "");
	
	int n1 = 18;
	int n2 = 5;
	
	//Impresi�n 
	printf("Operaciones B�sicas\n");
	printf("-------------------\n");
	printf("Suma..............: %d\n", (n1 + n2));
	printf("Resta.............: %d\n", (n1 - n2));
	printf("Producto..........: %d\n", (n1 * n2));
	printf("Divisi�n..........: %d\n", (n1 / n2));
	printf("Resto Entero......: %d\n", (n1 % n2));
	
	
	system("pause");
	return 0;
	
}

