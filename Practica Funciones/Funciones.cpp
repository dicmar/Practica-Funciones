
/*1. Realizar un programa que permita calcular un descuento sabiendo que al comprar más de 10,000 el descuento
 será del 25% y por debajo o igual de 10,000 el  descuento será de 10%, considere lo necesario. */

// incluimos las variables
#include <iostream>
#include <stdlib.h>
using namespace std;

// Inicializamos una funcion que recibe parametros, agregamos el nombre

	float descuento (float monto){  // recibe el parametro
	
		float compras;  
		
		char opcionDesc;
		
			if(monto > 10000 ){  // indicamos si es mayor 10000 que cumpla la condicion
				
				compras = monto * 0.25; // descuento sera del 25%;
				
				return compras;  // retorna la funcion compras
			
			}
				else if (compras < 99999)   // la compra menos de 10000
					{
						cout<<"\tDESEA HACERLE UN DESCUENTO DEL 10% [ S/N ] : ";cin>>opcionDesc; 
						  // preguntas de si es necesario realizar el descuento
					
							if ((opcionDesc != 's') || (opcionDesc != 'S')){
								
								compras = monto * 0.10;
							}
							else{
								cout<<"NO TIENE DESCUENTO ";
							}
					
					
				return compras;  // retorna la funcion compras	
				}
	
	}
	
		

	int main (){
		
		
			// Declarando las variables		
				
				char continuar;  // tipo char
	
				float monto, total;   // tipo flat
		 
				int totalCompras;  // tipo int
	

					//  Inicio  Principal
					
					
		cout<<"\t\t**************************"<<endl;
		cout<<"\t\t        SUPERMARKET"       <<endl;
		cout<<"\t\t*************************\n\n";
		
					// Ciclo repetitivo do while
				
					do{
					
				
				
				
				cout<<"\t CUANTAS COMPRAS DESEA REGISTRAR : ";cin>>totalCompras;
	
					for(int iterador = 1; iterador <= totalCompras; iterador++ ){  // iterador de cuanto compras de deseamos
					
						cout<<"\tINGRESE EL MONTO TOTAL    : ";cin>>total; 
					
						monto +=  total;     // guardamos el totla de las compras
		
					}			
				
						cout<<"\n\t\tTOTAL DE COMPRAS : "<<monto<<endl; // imprimos el monto total neto
						
						
						cout<<"\t\t El DESCUENTO AL MONTO INGRESADO ES :"<<"Q "<<descuento(monto)<<endl; // Invocamos la funciion para imprimir el resultador
				
				
	
						cout<<"\n\n\tDESEA SEGUIR REGISTRANDO COMPRAS [S/N] : ";cin>>continuar; // ingresamos si  o no
			
			
			}while((continuar != 'S') || (continuar != 's'));  // indicamos si queremos seguir en el programa
			
			
			
	return 0;	
}





