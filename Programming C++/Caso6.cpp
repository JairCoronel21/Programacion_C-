//Potencias y Ra�ces
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	int n = 0;
	
	cout<<"N�mero: "; cin>>n;
	
	double r1 = pow(n, 2);  // N�mero elevado al cuadrado
	double r2 = sqrt(n);   //Raiz cuadrada del n�mero
	double r3 = pow(n, (1/2.0));  //Raiz cuadrada del n�mero
	double r4 = pow(n, (1/4.0));   //Raiz cuadrada del n�mero
	
	cout<<"Resultado1......... "<<r1<<"\n";
	cout<<"Resultado2......... "<<r2<<"\n";
	cout<<"Resultado3......... "<<r3<<"\n";
    cout<<"Resultado4......... "<<r4<<"\n";	
    
    system("pause");
	return 0;
}

