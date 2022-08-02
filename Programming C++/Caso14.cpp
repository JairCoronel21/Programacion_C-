// Clases y Poo( Programación Orientada a Objetos)
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

using namespace std;

class Persona {
	//Atributos (Caracteristicas)
	private:
		string nombre;
		string apellido;
		int edad;
		
    //Métodos (Accion)
    public:
    	string NombreCompleto();
    	string MostrarMensaje();
    	Persona(string, string, int);
    	
};

//Metodo NombreCompleto de la clase Persona
string Persona::NombreCompleto() {
	return nombre + " " + apellido;	
}

//Metodo MostrarMensaje de la clase Persona
string Persona::MostrarMensaje() {
	string mensaje = " ";
	
	if (edad > 17)
	  mensaje = "Apto para votar";
	else 
	  mensaje = "Menor de edad";
	  
	return mensaje;
}

//Constructor de la clase
//Permite iniciar los atributos de la clase
Persona::Persona(string nom, string ape, int ed) {
	nombre = nom;
	apellido = ape;
	edad = ed; 
}


int main() {
	setlocale(LC_ALL, "");

    //Instancia a la clase Persona
    Persona per1 = Persona("Joe", "Castillo", 25);
	Persona per2 = Persona("Rosa", "Gonzales", 17);
	
	cout<<"DATOS REGISTRADOS"<<endl;
	cout<<"================="<<endl;
	
	cout<<"\nPersona 1"<<endl;
	cout<<"-----------"<<endl;
	cout<<"Alumno.....:"<<per1.NombreCompleto()<<endl;
	cout<<"Mensaje....:"<<per1.MostrarMensaje()<<endl;
	
	cout<<"\nPersona 2"<<endl;
	cout<<"-----------"<<endl;
	cout<<"Alumno.....:"<<per2.NombreCompleto()<<endl;
	cout<<"Mensaje....:"<<per2.MostrarMensaje()<<endl;
	
	system("pause");
	return 0;
}


