//Lectura de datos
#include <iostream>
#include <stdlib.h>
#include <locale.h>



using namespace std;

int main() {
	setlocale(LC_ALL, "");
	
	string nombre = "";
	char genero = ' ';
	int edad = 0;
	
	cout<<"\nLECTURA DE DATOS\n";
	cout<<"------------------\n";
	cout<<"Nombre......: ";
	getline(cin, nombre);
	//cin>>nombre;
	
	
	
	cout<<"Género......: "; cin>>genero;
	cout<<"Edad......: "; cin>>edad;
	
	

	
	cout<<"\nDatos Ingresados\n";
	cout<<"------------------\n";
	cout<<"Nombre.........: "<<nombre<<endl;
	
	if (genero == 'M')
	  cout<<"Género...........: Masculino"<<endl;
	else
	  cout<<"Género...........: Femenino"<<endl;
	  
	  
	if (edad >= 18)
	  cout<<"Usted es Mayor de Edad"<<endl;
	else
	  cout<<"Usted es Menor de Edad"<<endl;
	  
	  
	system("pause");
	return 0;
	
	


}
	
