// Leer los datos de un arreglo númerico
// Luego mostrar: suma
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	int arr_edad[5];
	
	int s = 0;
	
	cout<<"LECTURA DE EDADES"<<endl;
	cout<<"-----------------"<<endl;
	
	for (int x = 0; x < 5; x++) {
		cout<<"Ingrese edad "<<(x + 1)<<": ";
		cin>>arr_edad[x];
		
		s += arr_edad[x];
		
	}
	
	
	cout<<"\nREULTADOS"<<endl;
	cout<<"-----------"<<endl;
	cout<<"La Suma de Edades es: "<<s<<endl;
	
	
	
	
	
	
	
	
}
