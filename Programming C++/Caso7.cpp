//Calcular la hipotenusa del triángulo
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	int copuesto, cadyacente;
	float h;
	
	cout<<"Escriba el Cateto Opuesto: ";
	cin>>copuesto;
	
	cout<<"Escriba el Cateto Adyacente: ";
	cin>>cadyacente;
	
	int a = 0;

	
	double r1 = pow(copuesto, 2);
	double r2 = pow(cadyacente, 2);
	a = r1 + r2;
	h = pow(a, (1/2.0)); 
	
	cout<<"La Hipotenusa del Triángulo es:... "<<h<<"\n";
	
	
	system("pause");
	return 0;
	
}
