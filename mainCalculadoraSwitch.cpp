#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero1,numero2,suma,resta,multiplicacion,resto,opcion;
	float division;
	cout <<"Escoja el numero de la opcion segun la operacion que desea realizar : \n"  <<"-1.Realizar suma de dos numeros \n"  <<"-2.Realizar resta de dos numeros \n"  <<"-3.Realizar multiplicacion de dos numeros \n" <<"-4.Realizar la division de dos numeros \n";
	cin >>opcion;
switch(opcion)
{case 1:
		cout <<"Digite numero uno : ";
		cin >>numero1;	
		cout <<"Digite numero dos : ";
		cin >>numero2;
		suma=numero1+numero2;
		cout <<"La suma de dos numeros es  " <<suma;
break;
case 2:	
		cout <<"Digite numero uno : ";
		cin >>numero1;	
		cout <<"Digite numero dos : ";
		cin >>numero2;
		resta=numero1-numero2;
		cout <<"La resta de dos numeros es : " <<resta;
break;
case 3:
		cout <<"Digite numero uno : ";
		cin >>numero1;	
		cout <<"Digite numero dos : ";
		cin >>numero2;
		multiplicacion=numero1*numero2;
		cout <<"La multiplicacion de dos numeros es : " <<multiplicacion;
break;
case 4:
		cout <<"Digite numero uno : ";
		cin >>numero1;	
		cout <<"Digite numero dos : ";
		cin >>numero2;
		division=numero1/numero2;
		cout <<"La division de dos numeros es : " <<division; 
break;
default: cout <<"La opcion no es correcta : " <<division;
	    }
	
	return 0;
}
