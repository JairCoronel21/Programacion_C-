//Ingrese 3 notas y calcule el promedio ponderado
// 40%, 40% 

#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	float n1 = 0, n2 = 0, n3 = 0;
	
	cout<<"REGISTRO DE NOTAS"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"Teoría..........:"; cin>>n1;
	cout<<"Laboratorio.....:"; cin>>n2;
	cout<<"Actitudinal.....:"; cin>>n3;
	
	float promedio = n1 * 0.4 + n2 * 0.4 + n3 * 0.2;
	
	// Operador condicional (ternario)
	string estado = (promedio >= 13 ? "Aprobado" : "Desaprobado");
	
	cout<<"RESULTADOS"<<endl;
	cout<<"----------"<<endl;
	cout<<"Promedio......: "<<promedio<<endl;
	cout<<"Estado........: "<<estado<<endl;
	
	
}
	
