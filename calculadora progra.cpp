#include <iostream> 

using namespace std;

void suma(float s, float q);
void resta(float s, float q);
void multiplicacion(float s, float q);
void division(float s, float q);
void pedirdat();
float num1, num2;

main() {int opciones;
do{
	cout<< "\tMENU DE CALCULADORA"<<endl;
	cout<<"1. suma"<<endl;
	cout<<"2. resta"<<endl;
	cout<<"3. multiplicacion"<<endl;
	cout<<"1. division"<<endl;
	cin>>opciones;
	
	switch (opciones){
		case 1: pedirdat();
		suma(num1,num2);
		system("pause");
		break;
		case 2:pedirdat();
		resta(num1,num2);
			system("pause");
		break;
		case 3:pedirdat();
		multiplicacion(num1,num2);
			system("pause");
		break;
		case 4:pedirdat();
		division(num1,num2);
			system("pause");
		break;
		default: cout<<"ESTE NUMERO NO ESTA EN NUESTRO MENU"<<endl;
			system("pause");
		break;
	}
	system("cls");
}while(opciones<=4);

}

void pedirdat (){
	cout<<"INGRESA EL PRIMER NUMERO: ";
	
	cin>>num1;
		cout<<"INGRESA EL SEGUNDO NUMERO: ";
	cin>>num2;
}


 void suma(float s,float q){
 	float suma = s + q ;
 	
 	cout<< " TU SUMA ES=" <<suma<<endl;
 	
 }
 void resta(float s,float q){
 	float resta = s - q;
 	cout<< " TU RESTA ES=" <<resta<<endl;
 	
 }
 
  void multiplicacion(float s,float q){
 	float multiplicacion= s * q;
 	cout<< " TU MULTIPLICACION ES=" <<multiplicacion<<endl;
 	
 }
  void division(float s,float q){
 	float division= s / q;
 	cout<< " TU DIVISION ES=" <<division<<endl;
 	
 }
