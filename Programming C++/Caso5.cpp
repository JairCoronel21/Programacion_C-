//Lectura de 2 numeros y las operaciones b�sicas
#include <iostream>
#include <stdlib.h>
#include <locale.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	float n1 = 0, n2 = 0;
	
	cout<<"Primer n�mero: ";
	cin>>n1;
	cout<<"Segundo n�mero: ";
	cin>>n2;
	
	float suma = 0, resta = 0, producto = 0, division = 0, promedio = 0, promedio2 = 0;
	
	int resto;
	 
	
	suma = n1 + n2;
	resta = n1 - n2;
	producto = n1 * n2;
	division = n1 / n2;
	resto = (int)n1 % (int)n2;
	promedio = suma / 2;
	promedio2 = (2*n1) + (2*n2) / 5;
	
    cout<<"Operaciones B�sicas\n";	
    cout<<"-------------------\n";
	cout<<"Suma......... "<<suma<<"\n";
	cout<<"Resta........ "<<resta<<"\n";
	cout<<"Producto..... "<<producto<<"\n";
	cout<<"Divisi�n..... "<<division<<"\n";
	cout<<"Resto........ "<<resto<<"\n";
	cout<<"Promedio..... "<<promedio<<"\n";
	cout<<"Promedio2..... "<<promedio2<<"\n";
	
}
