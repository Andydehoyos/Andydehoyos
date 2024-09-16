//hacer un vector que guarde 10 notas en un vector y saque el promedio y 
//se pueda buscar la nota que uno desee



#include<iostream>
#include<windows.h>
#include<locale.h>
using namespace std;
void gui(){
	cout<<"-------------------------------------------"<<endl;
}
int main(){
	
	
setlocale(LC_CTYPE, "Spanish");
	
	system("color 3");
 float notas[10];
 double suma, media;
 double buscar;
 cout << "ingrese las notas del estudiante "<<endl;

 for (int i=0;i<10;i++){

    cin >> notas[i];
    suma += notas[i];
 }

 media =suma/10;

 cout<<"ingrese la nota que desea buscar "<<endl;
cin>>buscar;

for (int b=0; b<10; b++){

    if(buscar==notas[b]){
    	gui();
        cout<<" Nota encontrada en la posicion "<<b<<endl;
    }else {
    	gui();
        cout<<"La nota que busca no se encuentra registrada "<<endl;
    }

    }
	gui();
    cout<<"El promedio de notas es "<<media<<endl;
}




