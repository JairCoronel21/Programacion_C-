//Implemente una Clase Calculadora
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

using namespace std;

class Calculadora {
	private:
		float numero1;
		float numero2;
		
	public:
		float Operar(int);
		Calculadora(float, float);
};

float Calculadora::Operar(int opc) {
	float rp = 0;
	
	switch (opc) {
		case 1:
			rp = numero1 + numero2;
			break;
		case 2:
			rp = numero1 - numero2;
			break;
	}
	return rp;
	
}

Calculadora::Calculadora(float num1, float num2) {
      numero1 = num1;
      numero2 = num2;
}


int main() {
	setlocale(LC_ALL, "");
	
	float n1 = 0, n2 = 0;
	cout<<"Primer número....:"; cin>>n1;
	cout<<"Segundo número...:"; cin>>n2;
	
	Calculadora calc(n1, n2);
	
	cout<<"\nResultados"<<endl;
	cout<<"-----------"<<endl;
	cout<<"Suma.........:"<<calc.Operar(1)<<endl;
	cout<<"Resta........:"<<calc.Operar(2)<<endl;
	
	//Completar Producto, Division, Resto Entero, Mayor, Menor, Promedio y Suma de Cuadrados
	
	system("pause");
	return 0;
}














