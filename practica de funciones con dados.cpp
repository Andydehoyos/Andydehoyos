#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

int main(){
 int puntuacion1, puntuacion2, puntuacion3;
 string nombreJugador1;
 string nombreJugador2;
 string nombreJugador3;
 int opcion;
 string ganador;
}
 do{
 	cout<<"1. empezar a jugar"<<endl;
	cout<<"2.no quiero jugar"<<endl;
 	cin>>op;
  switch(op){
  	
    case 1:
    	cout<<"ingresa el nombre de el primer jugador"<<endl<<
 	    getline(cin.nombreJugador1);
 	    
 	    for(int i=0;i<1;i++){
 	    	cout<<"numero"<<rand()%6<<endl;
		 }
  		cout<<"ingresa el nombre de el segundo jugador"<<endl<<
 		getline(cin.nombreJugador2);
 		for(int i=0;i<1;i++){
 	    	cout<<"numero"<<rand()%6<<endl;
		 }
  		cout<<"ingresa el nombre de el tercer jugador"<<endl<<
 	    getline(cin.nombreJugador3);
 	    for(int i=0;i<1;i++){
 	    	cout<<"numero"<<rand()%6<<endl;
		 }
 	    if(puntuacion1>puntuacion2 && puntuacion1>puntuacion3){
 	    	cout<<"el ganador es"<<jugador1<<""
		 }
 } 
 
 	
}while (op!=2);
}
