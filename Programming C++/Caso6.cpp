//Potencias y Raíces
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	int n = 0;
	
	cout<<"Número: "; cin>>n;
	
	double r1 = pow(n, 2);  // Número elevado al cuadrado
	double r2 = sqrt(n);   //Raiz cuadrada del número
	double r3 = pow(n, (1/2.0));  //Raiz cuadrada del número
	double r4 = pow(n, (1/4.0));   //Raiz cuadrada del número
	
	cout<<"Resultado1......... "<<r1<<"\n";
	cout<<"Resultado2......... "<<r2<<"\n";
	cout<<"Resultado3......... "<<r3<<"\n";
    cout<<"Resultado4......... "<<r4<<"\n";	
    
    system("pause");
	return 0;
}

