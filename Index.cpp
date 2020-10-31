#include<iostream>

using namespace std;

int main(){
	
	cout<<"             Universidad Mariano G\xa0lvez de Guatemala\n";
	cout<<"                       Campus Villa Nueva\n";
	cout<<"Ingenieria en Sistemas de Informaci\xa2n y Ciencias de la Computaci\xa2n\n";
	cout<<"                   Investigaci\xa2n de Operaciones\n\n";
	
	int opcion;
	
	cout<<"1. M\x82todo de Esquina Noroeste\n";
	cout<<"2. M\x82todo Simplex\n\n";
	cout<<"Ingrese la opci\xa2n que desea: \n";
	cin>> opcion;
	
	switch(opcion)
	{
		case 1:
			system("cls");
			system("nwc.exe");
			main();
		break;
		case 2:
			system("cls");
			system("simplex.exe");
			main();
		break;
		default:
			cout<<"Ingrese una opci\xa2n correcta.\n\n";
			main();
		break;
			
	}
	
	return 0;
	
	}
