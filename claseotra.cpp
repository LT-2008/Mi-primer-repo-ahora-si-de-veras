#include <iostream>
//Programa que permita al usuario que permita 3 numeros y diga cuales son los divisores en comun
using namespace std;
int main(){
	int a=0;
	int b=0;
	int c=0;
int i=0;
int numeromayor=0;
cout<<"Ingrese un numero:"<<endl;
cin>>a;
cout<<"Ingrese otro numero:"<<endl;
cin>>b;
cout<<"Ingrese un ultimo numero:"<<endl;
cin>>c;
numeromayor=a+b+c;
     for (int i=1; i<numeromayor;i++){
if(a%i==0 && b%i==0 && c%i==0){
cout<<"\nEl divisor comun es:"<<i;
}
}
return 0;
}