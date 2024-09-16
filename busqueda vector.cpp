//use un vector de n posiciones(la que desee) y trate de llenarlo
//haga la funcionalidad para que se pueda buscar un dato determinado

#include<iostream>
#include<locale.h>
#include<windows.h>

using namespace std;

int main(){
setlocale(LC_CTYPE, "Spanish");


int vector[6], elem=0, i=0, j=0,op, posicion=0;
cout<<"------------------------------"<<endl;
cout<<"\t ingrese los elementos"<<endl;
cout<<"------------------------------"<<endl;

for (i=0;i<6;i++){
    cin>>vector[i];

}

system("cls");
cout<<"------------------------------"<<endl;
cout<<"\t ingrese el elemento a buscar"<<endl;
cout<<"------------------------------"<<endl;
cin>>elem;

for (j=0;j<6;j++){
    if(vector[j]==elem){
        cout<<"El elemento buscado se encuentra en la posicion  "<<j;
        posicion++;
        
    }

}

cout<<"------------------------------"<<endl;
if (posicion>0){
    cout<<"El elemento esta en el vector "<<posicion<<" veces 1"<<endl;
}else{
    cout<<"el elemento no está en el vector"<<endl;
}
cout<<"------------------------------"<<endl;
 system("pause");
 system("cls");
 
 cout<<"desea reemplazar algun dato en el vector? "<<endl;
 cout<<"(1. si 2. no)"<<endl;
 cin>>op;
 


    if(op == 1) {
        int nuevaposicion, nuevovalor;
        cout<<"Ingrese la posición del elemento a reemplazar (0 a 5): "<<endl;
        cin>>nuevaposicion;

        if(nuevaposicion >= 0 && nuevaposicion < 6) {
            cout<<"Ingrese el nuevo valor para la posición "<<nuevaposicion<<endl;
            cin>>nuevovalor;
            vector[nuevaposicion] = nuevovalor;
            
            cout<<"------------------------------"<<endl;
            cout<<"El vector actualizado es: "<<endl;
            for(i=0; i<6; i++){
                cout<<vector[i]<<" ";
            }
            cout<<endl;
            cout<<"------------------------------"<<endl;
        } else {
            cout<<"La posición ingresada está fuera de la capacidad del vector"<<endl;
        }
    }

}
 
 
