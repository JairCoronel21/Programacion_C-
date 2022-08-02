//Arrays

#include <iostream>
#include <stdlib.h>
#include <locale.h>



using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	int arr_n[] = {8, 2, 5, 9, 1, 4, 3, 6};
	
	int cantidad = sizeof(arr_n) / sizeof(arr_n[0]);
	
	int suma = 0;
	
	
	cout<<"\nLista de Números\n";
	cout<<"------------------\n";
	for(int i = 0; i < cantidad; i++) {
		cout<<"Número "<<(i + 1)<<": "<<arr_n[i]<<endl;
		
		suma = suma + arr_n[i];
	}
	
	// Promedio, Cantidad de numeros pares, impares
	// Mayor, Menor
	cout<<"\nLa suma de lo números es: "<<suma<<endl;
}
	
	system("pause");
	return 0;
	
}



