// Ingrese nombre y 3 notas 
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	const int NR = 2;
	
	string arr_nombre[NR];
	float arr_teoria[NR], arr_laboratorio[NR], arr_actitudinal[NR];
	
	float promedio = 0;
	
	
	
	for (int i = 0; i < NR; i++) {
		system("cls"); //Para limpiar pantalla
		
		cout<<"LECTURA DE DATOS"<<endl;
	    cout<<"================"<<endl;
		
		cout<<"\nRegistro "<<(i + 1)<<endl;
		cout<<"----------"<<endl;
		
		cout<<"Alumno...........: "; getline(cin, arr_nombre[i]);
		
		arr_teoria[i] = -1;
		
		while (arr_teoria[i] < 0 || arr_teoria[i] > 20) {
			cout<<"Teoría.......: "; cin>>arr_teoria[i];
			
			if  (arr_teoria[i] < 0 || arr_teoria[i] > 20) {
				cout<<"Nota fuera de rango...."<<endl;
			}
			
		
		
	   	}
		
		
        cout<<"Laboratorio......: "; cin>>arr_laboratorio[i];
		cout<<"Actitudinal......: "; cin>>arr_actitudinal[i];
		
		// Promedio ponderado
		// Estado: Aprobado o desaprobado
		
		cin.get(); //Limpiar el buffer de lectura (para caracteres)
		
		
	}
	
	system("pause");
	return 0;
	//Resumen
	//Nombre y promedio mayor
	//Nombre y promedio menor 
}




