#include <stdio.h>

//realice un programa que permita separar en cifras numeros en un rango entre 10 y 999999, ademas de separar las cifras y
//mostrarlas en la pantalla, el programa debe ser capaz de identificar si el numero ingresado es par, impar, primo, o perfecto

int main () {
	int numeroIngresado = 0;
	int uni = 0;
	int dec = 0;
	int cen = 0;
	int unik = 0;
	int deck = 0;
	int cenk = 0;
	int contDiv = 0;
	int acumPerf = 0; 
	
	cout<<"Ingrese un numero entre 10 y 999999: "<<endl;
	cin>>numeroIngresado;
	
	
	
	if (numeroIngresado < 10 || numeroIngresado > 999999) {
		cout<<"\nError. El numero pasa los limites."<<endl;
	} 
	
	//calculo de separacion de cifras
	uni = numeroIngresado / 10;
	dec = (numeroIngresado / 10) % 10;
	cen = (numeroIngresado / 100) % 10;
	unik = (numeroIngresado / 1000) % 10;
	deck = (numeroIngresado / 10000) % 10;
	cenk = (numeroIngresado / 100000) % 10;
	
	//calculo de par, impar
	if (numeroIngresado % 2 == 0 ) {
		cout<<"\nEl numero ingresado es Par"<<endl;
	} else {
		cout<<"\nEl numero ingresado es Impar"<<endl;
	}
	
	//calculo de primo, perfecto
	for (int i = 1; i <= numeroIngresado; i++) {
		if (numeroIngresado % i == 0) {
			contDiv++;
		} else {
			
		}
	}
}