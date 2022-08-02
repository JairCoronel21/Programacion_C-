//Implementar metodos para calcular
// Suma de valores y Mayor valor de un arreglo númerico
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

//Metodo para calcular la suma de los sueldos
float TotalSueldo(float arr[], int c) {
	float s = 0;
	
	for (int x = 0; x < c; x++)
	    s += arr[x];
	    
    return s;
	
}

//Metodo para hallar el sueldo mayor
float MayorSueldo(float arr[], int c) {
	float my = 0;
	
	for (int x = 0; x < c; x++) {
		if (arr[x] > my)
		   my = arr[x];
	}
	
	return my; //Devolver la respuesta
}


int main() {
	setlocale(LC_ALL, "");
	
	float arr_sueldo[] = {1500, 2200, 2850, 1480, 2195};
	
	int cantidad = sizeof(arr_sueldo) / sizeof(arr_sueldo[0]);
	
	float ts = TotalSueldo(arr_sueldo, cantidad);
	
	float my = MayorSueldo(arr_sueldo, cantidad);
	
	cout<<"\nRESULTADOS"<<endl;
	cout<<"============"<<endl;
	cout<<"Total de sueldos es........: "<<ts<<endl;
	cout<<"El mayor sueldo es.........: "<<my<<endl;
	
	
	system("pause");
	return 0;
	
	
}
