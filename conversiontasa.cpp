#include <iostream>

//realiza un programa que qu reciba un monto en bs y una tasa de conversion a dolares y devuelva el monto en dolares

using namespace std;
int main(){
	int montoBs = 0;
	double tasaBcv = 860.17;
	float montoDolares = 0;
	
	cout<<"Ingrese el monto en Bs: "<<endl;
	cin>>montoBs;
	
	montoDolares = (montoBs / tasaBcv);
	cout<<"El monto en dolares es: "<<montoDolares<<endl;
	
	return 0;
}
