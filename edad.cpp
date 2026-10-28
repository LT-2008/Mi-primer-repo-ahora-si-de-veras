#include <stdio.h>

//realice un programa que a partir de una fecha ingresada calcule la edad, valide que sea una fecha valida

using namespace std;

int main () {
	int diaN = 0;
	int mesN = 0;
	int anoN = 0;
	int diaA = 0;
	int mesA = 0;
	int anoA = 0;
	int edad = 0;
	
	//ingreso de datos nacimiento
	cout<<"Bienvenido, calcularemos su edad."<<endl;
	cout<<"Ingrese su dia de nacimiento: "<<endl;
	cin>>diaN;
	
	cout<<"Ingrese su mes de nacimiento: "<<endl;
	cin>>mesN;
	
	cout<<"Ingrese su ano de nacimiento: "<<endl;
	cin>>anoN;
	
	//ingreso de datos fecha actual
	cout<<"Ingrese el dia de hoy: "<<endl;
	cin>>diaA;
	
	cout<<"Ingrese el mes de hoy: "<<endl;
	cin>>mesA;
	
	cout<<"Ingrese el ano de hoy: "<<endl;
	cin>>anoA;
	
	// validaciones
	if (dia > 31 ) {
		cout<<"Error, ese dia no existe. "<<endl;
	}
	if (mes > 12) {
		cout<<"Error, ese mes no existe. "<<endl;
	}
	
	edad = anoA - anoN;
	
	cout<<"Su edad es: "<<edad<<endl;
	
	return 0;
}