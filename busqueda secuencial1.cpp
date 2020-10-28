#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int a[]={3,4,2,1,5,6,7,8,9,0};//iniciamos el arreglo con 10 valores
	int i, dato;
	char band ='F';//variable bandera, nos dira si esta o no esta el numero dentro del arreglo
	
	
	cout<<"ingrese el numero a buscar: ";
	cin>>dato;
	
	
	
	//es el algoritmo que busca el numero en el arreglo
	i=0;
	while((band=='F')&&(i<10)){
		if (a[i]==dato){
			band='V';
		}
		i++;	
	}
	
	
	
	//apareceran en pantalla, si fue encontrado el numero o no
	if(band=='F'){
		cout<<"EL NUMERO A BUSCAR NO EXISTE EN EL ARREGLO"<<endl;
	}
	else if(band=='V'){
		cout<<"EL NUMERO A BUSCAR A SIDO ENCONTRADO EN LA POSICION: "<<i-1<<endl;
	}



	getch();
	return 0;
}
